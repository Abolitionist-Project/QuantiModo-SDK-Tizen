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
    void setPClientId(String* pClientId);
    Integer* getPUserId();
    void setPUserId(Integer* pUserId);
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariableId);
    Float* getPDefaultValue();
    void setPDefaultValue(Float* pDefaultValue);
    String* getPReminderStartTime();
    void setPReminderStartTime(String* pReminderStartTime);
    String* getPReminderEndTime();
    void setPReminderEndTime(String* pReminderEndTime);
    String* getPReminderSound();
    void setPReminderSound(String* pReminderSound);
    Integer* getPReminderFrequency();
    void setPReminderFrequency(Integer* pReminderFrequency);
    Boolean* getPPopUp();
    void setPPopUp(Boolean* pPopUp);
    Boolean* getPSms();
    void setPSms(Boolean* pSms);
    Boolean* getPEmail();
    void setPEmail(Boolean* pEmail);
    Boolean* getPNotificationBar();
    void setPNotificationBar(Boolean* pNotificationBar);
    DateTime* getPLastReminded();
    void setPLastReminded(DateTime* pLastReminded);
    DateTime* getPLastTracked();
    void setPLastTracked(DateTime* pLastTracked);
    String* getPFirstDailyReminderTime();
    void setPFirstDailyReminderTime(String* pFirstDailyReminderTime);
    String* getPSecondDailyReminderTime();
    void setPSecondDailyReminderTime(String* pSecondDailyReminderTime);
    String* getPThirdDailyReminderTime();
    void setPThirdDailyReminderTime(String* pThirdDailyReminderTime);
    String* getPStartTrackingDate();
    void setPStartTrackingDate(String* pStartTrackingDate);
    String* getPStopTrackingDate();
    void setPStopTrackingDate(String* pStopTrackingDate);
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
String* pClientId;
Integer* pUserId;
Integer* pVariableId;
Float* pDefaultValue;
String* pReminderStartTime;
String* pReminderEndTime;
String* pReminderSound;
Integer* pReminderFrequency;
Boolean* pPopUp;
Boolean* pSms;
Boolean* pEmail;
Boolean* pNotificationBar;
DateTime* pLastReminded;
DateTime* pLastTracked;
String* pFirstDailyReminderTime;
String* pSecondDailyReminderTime;
String* pThirdDailyReminderTime;
String* pStartTrackingDate;
String* pStopTrackingDate;
DateTime* pUpdatedAt;
String* pVariableName;
String* pVariableCategoryName;
String* pAbbreviatedUnitName;
String* pCombinationOperation;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminder_H_ */
