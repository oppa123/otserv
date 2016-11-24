//////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
//////////////////////////////////////////////////////////////////////
// 
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////


#ifndef __TALKACTION_H__
#define __TALKACTION_H__

#include <list>
#include <string>
#include "luascript.h"
#include "baseevents.h"
#include "const.h"

enum TalkActionResult_t
{
	//TALKACTION_NOTFOUND,
	TALKACTION_CONTINUE,
	TALKACTION_BREAK,
	TALKACTION_FAILED,
};

enum TalkActionFilterType
{
	TALKACTION_MATCH_QUOTATION,
	TALKACTION_MATCH_FIRST_WORD,
};

class TalkAction;

class TalkActions : public BaseEvents
{
	public:
		TalkActions();
		virtual ~TalkActions();
	
		TalkActionResult_t onPlayerSpeak(Player* player, SpeakClasses type, const std::string& words);
	
	protected:
		virtual LuaScriptInterface& getScriptInterface();
		virtual std::string getScriptBaseName();
		virtual Event* getEvent(const std::string& nodeName);
		virtual bool registerEvent(Event* event, const pugi::xml_node& node);
		virtual void clear();
	
		typedef std::list< std::pair<std::string, TalkAction* > > TalkActionList;
		TalkActionList wordsMap;
	
		LuaScriptInterface m_scriptInterface;
};

typedef bool (TalkActionFunction)(Creature* creature, const std::string& words, const std::string& param);

class TalkAction : public Event
{
	public:
		TalkAction(LuaScriptInterface* _interface);
		virtual ~TalkAction();
		
		virtual bool configureEvent(const pugi::xml_node& node);
		virtual bool loadFunction(const std::string& functionName);
	
		std::string getWords() const {return commandString;}
		int16_t getAccessLevel() const {return m_access;}
		bool isLogged() const {return m_logged;}
		bool isCaseSensitive() const {return m_sensitive;}
		TalkActionFilterType getFilterType() const {return m_filterType;}
		TalkActionFunction* getFunction() const {return m_function;}
		bool isScripted() const {return m_scripted;}

		//scripting
		uint32_t executeSay(Creature* creature, const std::string& words, const std::string& param);
		//
	
	protected:
		virtual std::string getScriptEventName();

		static TalkActionFunction banPlayer;
		static TalkActionFunction addSkill;
		static TalkActionFunction joinGuild;
		static TalkActionFunction createGuild;
		static TalkActionFunction unBan;
		static TalkActionFunction ghost;
	
		std::string commandString;
		int16_t m_access;
		bool m_logged;
		bool m_sensitive;
		TalkActionFilterType m_filterType;
		TalkActionFunction* m_function;
};

#endif
