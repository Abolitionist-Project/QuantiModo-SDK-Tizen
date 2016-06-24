/*
 * SamiTrackingReminderNotificationTrack.h
 * 
 * 
 */

#ifndef SamiTrackingReminderNotificationTrack_H_
#define SamiTrackingReminderNotificationTrack_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiTrackingReminderNotificationTrack: public SamiObject {
public:
    SamiTrackingReminderNotificationTrack();
    SamiTrackingReminderNotificationTrack(String* json);
    virtual ~SamiTrackingReminderNotificationTrack();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminderNotificationTrack* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);

private:
    Integer* pId;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminderNotificationTrack_H_ */
