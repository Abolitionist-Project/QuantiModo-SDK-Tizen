/*
 * SamiConnector.h
 * 
 * 
 */

#ifndef SamiConnector_H_
#define SamiConnector_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::DateTime;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiConnector: public SamiObject {
public:
    SamiConnector();
    SamiConnector(String* json);
    virtual ~SamiConnector();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnector* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    
    String* getPImage();
    void setPImage(String* pImage);
    
    String* getPGetItUrl();
    void setPGetItUrl(String* pGet_it_url);
    
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    
    Boolean* getPEnabled();
    void setPEnabled(Boolean* pEnabled);
    
    Boolean* getPOauth();
    void setPOauth(Boolean* pOauth);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pName;
    String* pDisplay_name;
    String* pImage;
    String* pGet_it_url;
    String* pShort_description;
    String* pLong_description;
    Boolean* pEnabled;
    Boolean* pOauth;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiConnector_H_ */
