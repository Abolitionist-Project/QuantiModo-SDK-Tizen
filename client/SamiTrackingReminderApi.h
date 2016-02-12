#ifndef SamiTrackingReminderApi_H_
#define SamiTrackingReminderApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_6.h"
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiTrackingReminder.h"
#include "SamiInline_response_200_23.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTrackingReminderApi {
public:
  SamiTrackingReminderApi();
  virtual ~SamiTrackingReminderApi();

  
  SamiInline_response_200_6* 
  trackingRemindersGetWithCompletion(String* accessToken, String* clientId, Integer* userId, Integer* variableId, Boolean* popUp, Boolean* sms, Boolean* email, Boolean* notificationBar, String* lastReminded, String* lastTracked, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_6*, SamiError*));
  
  SamiInline_response_200_23* 
  trackingRemindersPostWithCompletion(String* accessToken, SamiTrackingReminder* body, void (* handler)(SamiInline_response_200_23*, SamiError*));
  
  SamiInline_response_200_23* 
  trackingRemindersIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_23*, SamiError*));
  
  SamiInline_response_200_2* 
  trackingRemindersIdPutWithCompletion(Integer* _id, String* accessToken, SamiTrackingReminder* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  trackingRemindersIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTrackingReminderApi_H_ */
