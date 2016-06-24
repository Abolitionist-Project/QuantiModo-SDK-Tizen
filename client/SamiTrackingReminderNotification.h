/*
 * SamiTrackingReminderNotification.h
 * 
 * 
 */

#ifndef SamiTrackingReminderNotification_H_
#define SamiTrackingReminderNotification_H_

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

class SamiTrackingReminderNotification: public SamiObject {
public:
    SamiTrackingReminderNotification();
    SamiTrackingReminderNotification(String* json);
    virtual ~SamiTrackingReminderNotification();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminderNotification* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPTrackingReminderId();
    void setPTrackingReminderId(Integer* pTrackingReminderId);
    String* getPClientId();
    void setPClientId(String* pClientId);
    Integer* getPUserId();
    void setPUserId(Integer* pUserId);
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariableId);
    DateTime* getPPendingReminderTime();
    void setPPendingReminderTime(DateTime* pPendingReminderTime);
    Float* getPDefaultValue();
    void setPDefaultValue(Float* pDefaultValue);
    String* getPReminderSound();
    void setPReminderSound(String* pReminderSound);
    Boolean* getPPopUp();
    void setPPopUp(Boolean* pPopUp);
    Boolean* getPSms();
    void setPSms(Boolean* pSms);
    Boolean* getPEmail();
    void setPEmail(Boolean* pEmail);
    Boolean* getPNotificationBar();
    void setPNotificationBar(Boolean* pNotificationBar);
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdatedAt);
    String* getPVariableName();
    void setPVariableName(String* pVariableName);
    String* getPVariableCategoryName();
    void setPVariableCategoryName(String* pVariableCategoryName);
    String* getPAbbreviatedUnitName();
    void setPAbbreviatedUnitName(String* pAbbreviatedUnitName);
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);

private:
    Integer* pId;
Integer* pTrackingReminderId;
String* pClientId;
Integer* pUserId;
Integer* pVariableId;
DateTime* pPendingReminderTime;
Float* pDefaultValue;
String* pReminderSound;
Boolean* pPopUp;
Boolean* pSms;
Boolean* pEmail;
Boolean* pNotificationBar;
DateTime* pUpdatedAt;
String* pVariableName;
String* pVariableCategoryName;
String* pAbbreviatedUnitName;
String* pCombinationOperation;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminderNotification_H_ */
