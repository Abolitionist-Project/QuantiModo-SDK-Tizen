#ifndef SamiRemindersApi_H_
#define SamiRemindersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200.h"
using Tizen::Base::Integer;
#include "SamiTrackingReminderNotificationSkip.h"
#include "SamiCommonResponse.h"
#include "SamiTrackingReminderNotificationSnooze.h"
#include "SamiTrackingReminderNotificationTrack.h"
#include "SamiTrackingReminderDelete.h"
#include "SamiInline_response_200_1.h"
#include "SamiTrackingReminder.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiRemindersApi {
public:
  SamiRemindersApi();
  virtual ~SamiRemindersApi();

  SamiInline_response_200* 
  v1TrackingReminderNotificationsGetWithCompletion(String* accessToken, String* variableCategoryName, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200*, SamiError*));
  SamiCommonResponse* 
  v1TrackingReminderNotificationsSkipPostWithCompletion(SamiTrackingReminderNotificationSkip* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1TrackingReminderNotificationsSnoozePostWithCompletion(SamiTrackingReminderNotificationSnooze* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1TrackingReminderNotificationsTrackPostWithCompletion(SamiTrackingReminderNotificationTrack* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1TrackingRemindersDeletePostWithCompletion(SamiTrackingReminderDelete* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiInline_response_200_1* 
  v1TrackingRemindersGetWithCompletion(String* accessToken, String* variableCategoryName, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_1*, SamiError*));
  SamiInline_response_200_2* 
  v1TrackingRemindersPostWithCompletion(String* accessToken, SamiTrackingReminder* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiRemindersApi_H_ */
