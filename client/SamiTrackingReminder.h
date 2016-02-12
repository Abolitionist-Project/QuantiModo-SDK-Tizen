/*
 * SamiTrackingReminder.h
 * 
 * 
 */

#ifndef SamiTrackingReminder_H_
#define SamiTrackingReminder_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTrackingReminder: public SamiObject {
public:
    SamiTrackingReminder();
    SamiTrackingReminder(String* json);
    virtual ~SamiTrackingReminder();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminder* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariable_id);
    
    Float* getPDefaultValue();
    void setPDefaultValue(Float* pDefault_value);
    
    String* getPReminderStartTime();
    void setPReminderStartTime(String* pReminder_start_time);
    
    String* getPReminderEndTime();
    void setPReminderEndTime(String* pReminder_end_time);
    
    String* getPReminderSound();
    void setPReminderSound(String* pReminder_sound);
    
    Integer* getPReminderFrequency();
    void setPReminderFrequency(Integer* pReminder_frequency);
    
    Boolean* getPPopUp();
    void setPPopUp(Boolean* pPop_up);
    
    Boolean* getPSms();
    void setPSms(Boolean* pSms);
    
    Boolean* getPEmail();
    void setPEmail(Boolean* pEmail);
    
    Boolean* getPNotificationBar();
    void setPNotificationBar(Boolean* pNotification_bar);
    
    DateTime* getPLastReminded();
    void setPLastReminded(DateTime* pLast_reminded);
    
    DateTime* getPLastTracked();
    void setPLastTracked(DateTime* pLast_tracked);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pClient_id;
    Integer* pUser_id;
    Integer* pVariable_id;
    Float* pDefault_value;
    String* pReminder_start_time;
    String* pReminder_end_time;
    String* pReminder_sound;
    Integer* pReminder_frequency;
    Boolean* pPop_up;
    Boolean* pSms;
    Boolean* pEmail;
    Boolean* pNotification_bar;
    DateTime* pLast_reminded;
    DateTime* pLast_tracked;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiTrackingReminder_H_ */
