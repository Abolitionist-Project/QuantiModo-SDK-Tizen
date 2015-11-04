#ifndef SamiConnectionApi_H_
#define SamiConnectionApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_3.h"
using Tizen::Base::Integer;
#include "SamiConnection.h"
#include "SamiInline_response_200_4.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectionApi {
public:
  SamiConnectionApi();
  virtual ~SamiConnectionApi();

  
  SamiInline_response_200_3* 
  connectionsGetWithCompletion(Integer* userId, Integer* connectorId, String* connectStatus, String* connectError, String* updateRequestedAt, String* updateStatus, String* updateError, String* lastSuccessfulUpdatedAt, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_3*, SamiError*));
  
  SamiInline_response_200_4* 
  connectionsPostWithCompletion(SamiConnection* body, void (* handler)(SamiInline_response_200_4*, SamiError*));
  
  SamiInline_response_200_4* 
  connectionsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_4*, SamiError*));
  
  SamiInline_response_200_2* 
  connectionsIdPutWithCompletion(Integer* _id, SamiConnection* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  connectionsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectionApi_H_ */
