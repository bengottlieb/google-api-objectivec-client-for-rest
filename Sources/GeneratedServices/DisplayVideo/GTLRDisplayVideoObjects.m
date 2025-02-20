// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Display & Video 360 API (displayvideo/v4)
// Description:
//   Display & Video 360 API allows users to automate complex Display & Video
//   360 workflows, such as creating insertion orders and setting targeting
//   options for individual line items.
// Documentation:
//   https://developers.google.com/display-video/

#import <GoogleAPIClientForREST/GTLRDisplayVideoObjects.h>

// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_GoogleBytestreamMedia
//

@implementation GTLRDisplayVideo_GoogleBytestreamMedia
@dynamic resourceName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_Operation
//

@implementation GTLRDisplayVideo_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_Operation_Metadata
//

@implementation GTLRDisplayVideo_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_Operation_Response
//

@implementation GTLRDisplayVideo_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_Status
//

@implementation GTLRDisplayVideo_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRDisplayVideo_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDisplayVideo_Status_Details_Item
//

@implementation GTLRDisplayVideo_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
