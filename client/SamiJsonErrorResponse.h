/*
 * SamiJsonErrorResponse.h
 * 
 * 
 */

#ifndef SamiJsonErrorResponse_H_
#define SamiJsonErrorResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiJsonErrorResponse: public SamiObject {
public:
    SamiJsonErrorResponse();
    SamiJsonErrorResponse(String* json);
    virtual ~SamiJsonErrorResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiJsonErrorResponse* fromJson(String* obj);

    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    

private:
    String* pStatus;
    String* pMessage;
    
};

} /* namespace Swagger */

#endif /* SamiJsonErrorResponse_H_ */
