#ifndef SamiConnectorApi_H_
#define SamiConnectorApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_5.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiConnector.h"
#include "SamiInline_response_200_6.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectorApi {
public:
  SamiConnectorApi();
  virtual ~SamiConnectorApi();

  
  SamiInline_response_200_5* 
  connectorsGetWithCompletion(String* name, String* displayName, String* image, String* getItUrl, String* shortDescription, String* longDescription, Boolean* enabled, Boolean* oauth, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_5*, SamiError*));
  
  SamiInline_response_200_6* 
  connectorsPostWithCompletion(SamiConnector* body, void (* handler)(SamiInline_response_200_6*, SamiError*));
  
  SamiInline_response_200_6* 
  connectorsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_6*, SamiError*));
  
  SamiInline_response_200_2* 
  connectorsIdPutWithCompletion(Integer* _id, SamiConnector* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  connectorsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectorApi_H_ */
