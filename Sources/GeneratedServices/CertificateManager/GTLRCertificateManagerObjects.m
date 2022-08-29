// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Certificate Manager API (certificatemanager/v1)
// Documentation:
//   https://cloud.google.com/certificate-manager

#import <GoogleAPIClientForREST/GTLRCertificateManagerObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRCertificateManager_AuthorizationAttemptInfo.failureReason
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_FailureReason_Caa = @"CAA";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_FailureReason_Config = @"CONFIG";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_FailureReason_FailureReasonUnspecified = @"FAILURE_REASON_UNSPECIFIED";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_FailureReason_RateLimited = @"RATE_LIMITED";

// GTLRCertificateManager_AuthorizationAttemptInfo.state
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_State_Authorized = @"AUTHORIZED";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_State_Authorizing = @"AUTHORIZING";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_State_Failed = @"FAILED";
NSString * const kGTLRCertificateManager_AuthorizationAttemptInfo_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRCertificateManager_Certificate.scope
NSString * const kGTLRCertificateManager_Certificate_Scope_Default = @"DEFAULT";
NSString * const kGTLRCertificateManager_Certificate_Scope_EdgeCache = @"EDGE_CACHE";

// GTLRCertificateManager_CertificateMapEntry.matcher
NSString * const kGTLRCertificateManager_CertificateMapEntry_Matcher_MatcherUnspecified = @"MATCHER_UNSPECIFIED";
NSString * const kGTLRCertificateManager_CertificateMapEntry_Matcher_Primary = @"PRIMARY";

// GTLRCertificateManager_CertificateMapEntry.state
NSString * const kGTLRCertificateManager_CertificateMapEntry_State_Active = @"ACTIVE";
NSString * const kGTLRCertificateManager_CertificateMapEntry_State_Pending = @"PENDING";
NSString * const kGTLRCertificateManager_CertificateMapEntry_State_ServingStateUnspecified = @"SERVING_STATE_UNSPECIFIED";

// GTLRCertificateManager_ManagedCertificate.state
NSString * const kGTLRCertificateManager_ManagedCertificate_State_Active = @"ACTIVE";
NSString * const kGTLRCertificateManager_ManagedCertificate_State_Failed = @"FAILED";
NSString * const kGTLRCertificateManager_ManagedCertificate_State_Provisioning = @"PROVISIONING";
NSString * const kGTLRCertificateManager_ManagedCertificate_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRCertificateManager_ProvisioningIssue.reason
NSString * const kGTLRCertificateManager_ProvisioningIssue_Reason_AuthorizationIssue = @"AUTHORIZATION_ISSUE";
NSString * const kGTLRCertificateManager_ProvisioningIssue_Reason_RateLimited = @"RATE_LIMITED";
NSString * const kGTLRCertificateManager_ProvisioningIssue_Reason_ReasonUnspecified = @"REASON_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_AuthorizationAttemptInfo
//

@implementation GTLRCertificateManager_AuthorizationAttemptInfo
@dynamic details, domain, failureReason, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_CancelOperationRequest
//

@implementation GTLRCertificateManager_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Certificate
//

@implementation GTLRCertificateManager_Certificate
@dynamic createTime, descriptionProperty, expireTime, labels, managed, name,
         pemCertificate, sanDnsnames, scope, selfManaged, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sanDnsnames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Certificate_Labels
//

@implementation GTLRCertificateManager_Certificate_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_CertificateMap
//

@implementation GTLRCertificateManager_CertificateMap
@dynamic createTime, descriptionProperty, gclbTargets, labels, name, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"gclbTargets" : [GTLRCertificateManager_GclbTarget class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_CertificateMap_Labels
//

@implementation GTLRCertificateManager_CertificateMap_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_CertificateMapEntry
//

@implementation GTLRCertificateManager_CertificateMapEntry
@dynamic certificates, createTime, descriptionProperty, hostname, labels,
         matcher, name, state, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"certificates" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_CertificateMapEntry_Labels
//

@implementation GTLRCertificateManager_CertificateMapEntry_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_DnsAuthorization
//

@implementation GTLRCertificateManager_DnsAuthorization
@dynamic createTime, descriptionProperty, dnsResourceRecord, domain, labels,
         name, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_DnsAuthorization_Labels
//

@implementation GTLRCertificateManager_DnsAuthorization_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_DnsResourceRecord
//

@implementation GTLRCertificateManager_DnsResourceRecord
@dynamic data, name, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Empty
//

@implementation GTLRCertificateManager_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_GclbTarget
//

@implementation GTLRCertificateManager_GclbTarget
@dynamic ipConfigs, targetHttpsProxy, targetSslProxy;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ipConfigs" : [GTLRCertificateManager_IpConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_IpConfig
//

@implementation GTLRCertificateManager_IpConfig
@dynamic ipAddress, ports;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ports" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListCertificateMapEntriesResponse
//

@implementation GTLRCertificateManager_ListCertificateMapEntriesResponse
@dynamic certificateMapEntries, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"certificateMapEntries" : [GTLRCertificateManager_CertificateMapEntry class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"certificateMapEntries";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListCertificateMapsResponse
//

@implementation GTLRCertificateManager_ListCertificateMapsResponse
@dynamic certificateMaps, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"certificateMaps" : [GTLRCertificateManager_CertificateMap class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"certificateMaps";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListCertificatesResponse
//

@implementation GTLRCertificateManager_ListCertificatesResponse
@dynamic certificates, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"certificates" : [GTLRCertificateManager_Certificate class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"certificates";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListDnsAuthorizationsResponse
//

@implementation GTLRCertificateManager_ListDnsAuthorizationsResponse
@dynamic dnsAuthorizations, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dnsAuthorizations" : [GTLRCertificateManager_DnsAuthorization class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"dnsAuthorizations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListLocationsResponse
//

@implementation GTLRCertificateManager_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCertificateManager_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ListOperationsResponse
//

@implementation GTLRCertificateManager_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCertificateManager_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Location
//

@implementation GTLRCertificateManager_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Location_Labels
//

@implementation GTLRCertificateManager_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Location_Metadata
//

@implementation GTLRCertificateManager_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ManagedCertificate
//

@implementation GTLRCertificateManager_ManagedCertificate
@dynamic authorizationAttemptInfo, dnsAuthorizations, domains,
         provisioningIssue, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"authorizationAttemptInfo" : [GTLRCertificateManager_AuthorizationAttemptInfo class],
    @"dnsAuthorizations" : [NSString class],
    @"domains" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Operation
//

@implementation GTLRCertificateManager_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Operation_Metadata
//

@implementation GTLRCertificateManager_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Operation_Response
//

@implementation GTLRCertificateManager_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_OperationMetadata
//

@implementation GTLRCertificateManager_OperationMetadata
@dynamic apiVersion, createTime, endTime, requestedCancellation, statusMessage,
         target, verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_ProvisioningIssue
//

@implementation GTLRCertificateManager_ProvisioningIssue
@dynamic details, reason;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_SelfManagedCertificate
//

@implementation GTLRCertificateManager_SelfManagedCertificate
@dynamic pemCertificate, pemPrivateKey;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Status
//

@implementation GTLRCertificateManager_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCertificateManager_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCertificateManager_Status_Details_Item
//

@implementation GTLRCertificateManager_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end