/*
 * SamiSource.h
 * 
 * 
 */

#ifndef SamiSource_H_
#define SamiSource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiSource: public SamiObject {
public:
    SamiSource();
    SamiSource(String* json);
    virtual ~SamiSource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSource* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    String* getPName();
    void setPName(String* pName);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pClient_id;
    String* pName;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiSource_H_ */
