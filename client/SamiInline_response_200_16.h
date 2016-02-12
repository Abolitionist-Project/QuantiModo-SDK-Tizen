/*
 * SamiInline_response_200_16.h
 * 
 * 
 */

#ifndef SamiInline_response_200_16_H_
#define SamiInline_response_200_16_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiConnector.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_16: public SamiObject {
public:
    SamiInline_response_200_16();
    SamiInline_response_200_16(String* json);
    virtual ~SamiInline_response_200_16();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_16* fromJson(String* obj);

    
    SamiConnector* getPData();
    void setPData(SamiConnector* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiConnector* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_16_H_ */
