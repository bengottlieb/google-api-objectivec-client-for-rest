// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity-Aware Proxy API (iap/v1)
// Description:
//   Controls access to cloud applications running on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iap

#import <GoogleAPIClientForREST/GTLRCloudIAPObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudIAP_AttributePropagationSettings.outputCredentials
NSString * const kGTLRCloudIAP_AttributePropagationSettings_OutputCredentials_Header = @"HEADER";
NSString * const kGTLRCloudIAP_AttributePropagationSettings_OutputCredentials_Jwt = @"JWT";
NSString * const kGTLRCloudIAP_AttributePropagationSettings_OutputCredentials_OutputCredentialsUnspecified = @"OUTPUT_CREDENTIALS_UNSPECIFIED";
NSString * const kGTLRCloudIAP_AttributePropagationSettings_OutputCredentials_Rctoken = @"RCTOKEN";

// GTLRCloudIAP_ReauthSettings.method
NSString * const kGTLRCloudIAP_ReauthSettings_Method_Login     = @"LOGIN";
NSString * const kGTLRCloudIAP_ReauthSettings_Method_MethodUnspecified = @"METHOD_UNSPECIFIED";
NSString * const kGTLRCloudIAP_ReauthSettings_Method_SecureKey = @"SECURE_KEY";

// GTLRCloudIAP_ReauthSettings.policyType
NSString * const kGTLRCloudIAP_ReauthSettings_PolicyType_Default = @"DEFAULT";
NSString * const kGTLRCloudIAP_ReauthSettings_PolicyType_Minimum = @"MINIMUM";
NSString * const kGTLRCloudIAP_ReauthSettings_PolicyType_PolicyTypeUnspecified = @"POLICY_TYPE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_AccessDeniedPageSettings
//

@implementation GTLRCloudIAP_AccessDeniedPageSettings
@dynamic accessDeniedPageUri, generateTroubleshootingUri,
         remediationTokenGenerationEnabled;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_AccessSettings
//

@implementation GTLRCloudIAP_AccessSettings
@dynamic allowedDomainsSettings, corsSettings, gcipSettings, oauthSettings,
         policyDelegationSettings, reauthSettings;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_AllowedDomainsSettings
//

@implementation GTLRCloudIAP_AllowedDomainsSettings
@dynamic domains, enable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"domains" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ApplicationSettings
//

@implementation GTLRCloudIAP_ApplicationSettings
@dynamic accessDeniedPageSettings, attributePropagationSettings, cookieDomain,
         csmSettings;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_AttributePropagationSettings
//

@implementation GTLRCloudIAP_AttributePropagationSettings
@dynamic enable, expression, outputCredentials;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"outputCredentials" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Binding
//

@implementation GTLRCloudIAP_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Brand
//

@implementation GTLRCloudIAP_Brand
@dynamic applicationTitle, name, orgInternalOnly, supportEmail;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_CorsSettings
//

@implementation GTLRCloudIAP_CorsSettings
@dynamic allowHttpOptions;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_CsmSettings
//

@implementation GTLRCloudIAP_CsmSettings
@dynamic rctokenAud;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Empty
//

@implementation GTLRCloudIAP_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Expr
//

@implementation GTLRCloudIAP_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_GcipSettings
//

@implementation GTLRCloudIAP_GcipSettings
@dynamic loginPageUri, tenantIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tenantIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_GetIamPolicyRequest
//

@implementation GTLRCloudIAP_GetIamPolicyRequest
@dynamic options;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_GetPolicyOptions
//

@implementation GTLRCloudIAP_GetPolicyOptions
@dynamic requestedPolicyVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_IapSettings
//

@implementation GTLRCloudIAP_IapSettings
@dynamic accessSettings, applicationSettings, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_IdentityAwareProxyClient
//

@implementation GTLRCloudIAP_IdentityAwareProxyClient
@dynamic displayName, name, secret;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ListBrandsResponse
//

@implementation GTLRCloudIAP_ListBrandsResponse
@dynamic brands;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"brands" : [GTLRCloudIAP_Brand class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ListIdentityAwareProxyClientsResponse
//

@implementation GTLRCloudIAP_ListIdentityAwareProxyClientsResponse
@dynamic identityAwareProxyClients, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"identityAwareProxyClients" : [GTLRCloudIAP_IdentityAwareProxyClient class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"identityAwareProxyClients";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ListTunnelDestGroupsResponse
//

@implementation GTLRCloudIAP_ListTunnelDestGroupsResponse
@dynamic nextPageToken, tunnelDestGroups;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tunnelDestGroups" : [GTLRCloudIAP_TunnelDestGroup class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"tunnelDestGroups";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_OAuthSettings
//

@implementation GTLRCloudIAP_OAuthSettings
@dynamic loginHint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Policy
//

@implementation GTLRCloudIAP_Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRCloudIAP_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_PolicyDelegationSettings
//

@implementation GTLRCloudIAP_PolicyDelegationSettings
@dynamic iamPermission, iamServiceName, policyName, resource;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_PolicyName
//

@implementation GTLRCloudIAP_PolicyName
@dynamic identifier, region, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ReauthSettings
//

@implementation GTLRCloudIAP_ReauthSettings
@dynamic maxAge, method, policyType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_ResetIdentityAwareProxyClientSecretRequest
//

@implementation GTLRCloudIAP_ResetIdentityAwareProxyClientSecretRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Resource
//

@implementation GTLRCloudIAP_Resource
@dynamic labels, name, service, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_Resource_Labels
//

@implementation GTLRCloudIAP_Resource_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_SetIamPolicyRequest
//

@implementation GTLRCloudIAP_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_TestIamPermissionsRequest
//

@implementation GTLRCloudIAP_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_TestIamPermissionsResponse
//

@implementation GTLRCloudIAP_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudIAP_TunnelDestGroup
//

@implementation GTLRCloudIAP_TunnelDestGroup
@dynamic cidrs, fqdns, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cidrs" : [NSString class],
    @"fqdns" : [NSString class]
  };
  return map;
}

@end