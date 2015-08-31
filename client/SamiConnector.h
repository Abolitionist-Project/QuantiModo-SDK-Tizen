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


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Boolean;


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
    void setPDisplayName(String* pDisplayName);
    
    String* getPImage();
    void setPImage(String* pImage);
    
    String* getPGetItUrl();
    void setPGetItUrl(String* pGetItUrl);
    
    String* getPConnected();
    void setPConnected(String* pConnected);
    
    String* getPConnectInstructions();
    void setPConnectInstructions(String* pConnectInstructions);
    
    Integer* getPLastUpdate();
    void setPLastUpdate(Integer* pLastUpdate);
    
    Integer* getPTotalMeasurementsInLastUpdate();
    void setPTotalMeasurementsInLastUpdate(Integer* pTotalMeasurementsInLastUpdate);
    
    Boolean* getPNoDataYet();
    void setPNoDataYet(Boolean* pNoDataYet);
    

private:
    Integer* pId;
    String* pName;
    String* pDisplayName;
    String* pImage;
    String* pGetItUrl;
    String* pConnected;
    String* pConnectInstructions;
    Integer* pLastUpdate;
    Integer* pTotalMeasurementsInLastUpdate;
    Boolean* pNoDataYet;
    
};

} /* namespace Swagger */

#endif /* SamiConnector_H_ */
