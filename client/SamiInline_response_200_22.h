/*
 * SamiInline_response_200_22.h
 * 
 * 
 */

#ifndef SamiInline_response_200_22_H_
#define SamiInline_response_200_22_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSource.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_22: public SamiObject {
public:
    SamiInline_response_200_22();
    SamiInline_response_200_22(String* json);
    virtual ~SamiInline_response_200_22();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_22* fromJson(String* obj);

    
    SamiSource* getPData();
    void setPData(SamiSource* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiSource* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_22_H_ */
