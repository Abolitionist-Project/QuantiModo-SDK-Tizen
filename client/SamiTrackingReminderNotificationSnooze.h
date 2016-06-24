/*
 * SamiTrackingReminderNotificationSnooze.h
 * 
 * 
 */

#ifndef SamiTrackingReminderNotificationSnooze_H_
#define SamiTrackingReminderNotificationSnooze_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiTrackingReminderNotificationSnooze: public SamiObject {
public:
    SamiTrackingReminderNotificationSnooze();
    SamiTrackingReminderNotificationSnooze(String* json);
    virtual ~SamiTrackingReminderNotificationSnooze();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminderNotificationSnooze* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);

private:
    Integer* pId;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminderNotificationSnooze_H_ */
