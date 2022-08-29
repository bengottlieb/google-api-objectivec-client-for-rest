// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Game Services API (gameservices/v1)
// Description:
//   Deploy and manage infrastructure for global multiplayer gaming experiences.
// Documentation:
//   https://cloud.google.com/solutions/gaming/

#import <GoogleAPIClientForREST/GTLRGameServicesQuery.h>

@implementation GTLRGameServicesQuery

@dynamic fields;

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetIamPolicy

@dynamic optionsRequestedPolicyVersion, resource;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"optionsRequestedPolicyVersion" : @"options.requestedPolicyVersion" };
}

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_Policy class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.getIamPolicy";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRGameServices_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_Policy class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.setIamPolicy";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRGameServices_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_TestIamPermissionsResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.testIamPermissions";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Location class];
  query.loggingName = @"gameservices.projects.locations.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsList

@dynamic filter, includeUnrevealedLocations, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/locations";
  GTLRGameServicesQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_ListLocationsResponse class];
  query.loggingName = @"gameservices.projects.locations.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRGameServices_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRGameServicesQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Empty class];
  query.loggingName = @"gameservices.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Empty class];
  query.loggingName = @"gameservices.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRGameServicesQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_ListOperationsResponse class];
  query.loggingName = @"gameservices.projects.locations.operations.list";
  return query;
}

@end