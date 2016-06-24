/*
 * SamiTrackingReminderNotificationSkip.h
 * 
 * 
 */

#ifndef SamiTrackingReminderNotificationSkip_H_
#define SamiTrackingReminderNotificationSkip_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiTrackingReminderNotificationSkip: public SamiObject {
public:
    SamiTrackingReminderNotificationSkip();
    SamiTrackingReminderNotificationSkip(String* json);
    virtual ~SamiTrackingReminderNotificationSkip();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminderNotificationSkip* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);

private:
    Integer* pId;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminderNotificationSkip_H_ */
