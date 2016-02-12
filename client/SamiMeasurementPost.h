/*
 * SamiMeasurementPost.h
 * 
 * 
 */

#ifndef SamiMeasurementPost_H_
#define SamiMeasurementPost_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMeasurementValue.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;


namespace Swagger {

class SamiMeasurementPost: public SamiObject {
public:
    SamiMeasurementPost();
    SamiMeasurementPost(String* json);
    virtual ~SamiMeasurementPost();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementPost* fromJson(String* obj);

    
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariable_id);
    
    Integer* getPSourceId();
    void setPSourceId(Integer* pSource_id);
    
    Integer* getPUnitId();
    void setPUnitId(Integer* pUnit_id);
    
    IList* getPMeasurements();
    void setPMeasurements(IList* pMeasurements);
    

private:
    Integer* pVariable_id;
    Integer* pSource_id;
    Integer* pUnit_id;
    IList* pMeasurements;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementPost_H_ */
