// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Compute Engine Instance Group Manager API (replicapool/v1beta2)
// Description:
//   [Deprecated. Please use Instance Group Manager in Compute API] Provides
//   groups of homogenous Compute Engine instances.
// Documentation:
//   https://developers.google.com/compute/docs/instance-groups/manager/v1beta2

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReplicapool_AutoHealingPolicy;
@class GTLRReplicapool_InstanceGroupManager;
@class GTLRReplicapool_Operation;
@class GTLRReplicapool_Operation_Error;
@class GTLRReplicapool_Operation_Error_Errors_Item;
@class GTLRReplicapool_Operation_Warnings_Item;
@class GTLRReplicapool_Operation_Warnings_Item_Data_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRReplicapool_AutoHealingPolicy.actionType

/** Value: "REBOOT" */
GTLR_EXTERN NSString * const kGTLRReplicapool_AutoHealingPolicy_ActionType_Reboot;
/** Value: "RECREATE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_AutoHealingPolicy_ActionType_Recreate;

// ----------------------------------------------------------------------------
// GTLRReplicapool_Operation.status

/** Value: "DONE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Status_Done;
/** Value: "PENDING" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Status_Pending;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Status_Running;

// ----------------------------------------------------------------------------
// GTLRReplicapool_Operation_Warnings_Item.code

/** Value: "DEPRECATED_RESOURCE_USED" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_DeprecatedResourceUsed;
/** Value: "DISK_SIZE_LARGER_THAN_IMAGE_SIZE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_DiskSizeLargerThanImageSize;
/** Value: "INJECTED_KERNELS_DEPRECATED" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_InjectedKernelsDeprecated;
/** Value: "NEXT_HOP_ADDRESS_NOT_ASSIGNED" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopAddressNotAssigned;
/** Value: "NEXT_HOP_CANNOT_IP_FORWARD" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopCannotIpForward;
/** Value: "NEXT_HOP_INSTANCE_NOT_FOUND" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopInstanceNotFound;
/** Value: "NEXT_HOP_INSTANCE_NOT_ON_NETWORK" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopInstanceNotOnNetwork;
/** Value: "NEXT_HOP_NOT_RUNNING" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopNotRunning;
/** Value: "NO_RESULTS_ON_PAGE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_NoResultsOnPage;
/** Value: "REQUIRED_TOS_AGREEMENT" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_RequiredTosAgreement;
/** Value: "RESOURCE_NOT_DELETED" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_ResourceNotDeleted;
/** Value: "SINGLE_INSTANCE_PROPERTY_TEMPLATE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_SingleInstancePropertyTemplate;
/** Value: "UNREACHABLE" */
GTLR_EXTERN NSString * const kGTLRReplicapool_Operation_Warnings_Item_Code_Unreachable;

/**
 *  GTLRReplicapool_AutoHealingPolicy
 */
@interface GTLRReplicapool_AutoHealingPolicy : GTLRObject

/**
 *  The action to perform when an instance becomes unhealthy. Possible values
 *  are RECREATE or REBOOT. RECREATE replaces an unhealthy instance with a new
 *  instance that is based on the instance template for this managed instance
 *  group. REBOOT performs a soft reboot on an instance. If the instance cannot
 *  reboot, the instance performs a hard restart.
 *
 *  Likely values:
 *    @arg @c kGTLRReplicapool_AutoHealingPolicy_ActionType_Reboot Value
 *        "REBOOT"
 *    @arg @c kGTLRReplicapool_AutoHealingPolicy_ActionType_Recreate Value
 *        "RECREATE"
 */
@property(nonatomic, copy, nullable) NSString *actionType;

/** The URL for the HealthCheck that signals autohealing. */
@property(nonatomic, copy, nullable) NSString *healthCheck;

@end


/**
 *  An Instance Group Manager resource.
 */
@interface GTLRReplicapool_InstanceGroupManager : GTLRObject

/**
 *  The autohealing policy for this managed instance group. You can specify only
 *  one value.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_AutoHealingPolicy *> *autoHealingPolicies;

/**
 *  The base instance name to use for instances in this group. The value must be
 *  a valid RFC1035 name. Supported characters are lowercase letters, numbers,
 *  and hyphens (-). Instances are named by appending a hyphen and a random
 *  four-character string to the base instance name.
 */
@property(nonatomic, copy, nullable) NSString *baseInstanceName;

/**
 *  [Output only] The time the instance group manager was created, in RFC3339
 *  text format.
 */
@property(nonatomic, copy, nullable) NSString *creationTimestamp;

/**
 *  [Output only] The number of instances that currently exist and are a part of
 *  this group. This includes instances that are starting but are not yet
 *  RUNNING, and instances that are in the process of being deleted or
 *  abandoned.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currentSize;

/**
 *  An optional textual description of the instance group manager.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  [Output only] Fingerprint of the instance group manager. This field is used
 *  for optimistic locking. An up-to-date fingerprint must be provided in order
 *  to modify the Instance Group Manager resource.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/**
 *  [Output only] The full URL of the instance group created by the manager.
 *  This group contains all of the instances being managed, and cannot contain
 *  non-managed instances.
 */
@property(nonatomic, copy, nullable) NSString *group;

/**
 *  [Output only] A server-assigned unique identifier for the resource.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/**
 *  The full URL to an instance template from which all new instances will be
 *  created.
 */
@property(nonatomic, copy, nullable) NSString *instanceTemplate;

/**
 *  [Output only] The resource type. Always replicapool#instanceGroupManager.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The name of the instance group manager. Must be 1-63 characters long and
 *  comply with RFC1035. Supported characters include lowercase letters,
 *  numbers, and hyphens.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** [Output only] The fully qualified URL for this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The full URL of all target pools to which new instances in the group are
 *  added. Updating the target pool values does not affect existing instances.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *targetPools;

/**
 *  [Output only] The number of instances that the manager is attempting to
 *  maintain. Deleting or abandoning instances affects this number, as does
 *  resizing the group.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *targetSize;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagerList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRReplicapool_InstanceGroupManagerList : GTLRCollectionObject

/**
 *  Unique identifier for the resource; defined by the server (output only).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  A list of instance resources.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_InstanceGroupManager *> *items;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

/** A token used to continue a truncated list request (output only). */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** Server defined URL for this resource (output only). */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagersAbandonInstancesRequest
 */
@interface GTLRReplicapool_InstanceGroupManagersAbandonInstancesRequest : GTLRObject

/**
 *  The names of one or more instances to abandon. For example:
 *  { 'instances': [ 'instance-c3po', 'instance-r2d2' ] }
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *instances;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagersDeleteInstancesRequest
 */
@interface GTLRReplicapool_InstanceGroupManagersDeleteInstancesRequest : GTLRObject

/**
 *  Names of instances to delete.
 *  Example: 'instance-foo', 'instance-bar'
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *instances;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagersRecreateInstancesRequest
 */
@interface GTLRReplicapool_InstanceGroupManagersRecreateInstancesRequest : GTLRObject

/**
 *  The names of one or more instances to recreate. For example:
 *  { 'instances': [ 'instance-c3po', 'instance-r2d2' ] }
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *instances;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagersSetInstanceTemplateRequest
 */
@interface GTLRReplicapool_InstanceGroupManagersSetInstanceTemplateRequest : GTLRObject

/**
 *  The full URL to an Instance Template from which all new instances will be
 *  created.
 */
@property(nonatomic, copy, nullable) NSString *instanceTemplate;

@end


/**
 *  GTLRReplicapool_InstanceGroupManagersSetTargetPoolsRequest
 */
@interface GTLRReplicapool_InstanceGroupManagersSetTargetPoolsRequest : GTLRObject

/**
 *  The current fingerprint of the Instance Group Manager resource. If this does
 *  not match the server-side fingerprint of the resource, then the request will
 *  be rejected.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/**
 *  A list of fully-qualified URLs to existing Target Pool resources. New
 *  instances in the Instance Group Manager will be added to the specified
 *  target pools; existing instances are not affected.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *targetPools;

@end


/**
 *  An operation resource, used to manage asynchronous API requests.
 */
@interface GTLRReplicapool_Operation : GTLRObject

/**
 *  [Output only] An optional identifier specified by the client when the
 *  mutation was initiated. Must be unique for all operation resources in the
 *  project.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  [Output Only] The time that this operation was requested, in RFC3339 text
 *  format.
 */
@property(nonatomic, copy, nullable) NSString *creationTimestamp;

/**
 *  [Output Only] The time that this operation was completed, in RFC3339 text
 *  format.
 */
@property(nonatomic, copy, nullable) NSString *endTime;

/**
 *  [Output Only] If errors occurred during processing of this operation, this
 *  field will be populated.
 */
@property(nonatomic, strong, nullable) GTLRReplicapool_Operation_Error *error;

/** [Output only] If operation fails, the HTTP error message returned. */
@property(nonatomic, copy, nullable) NSString *httpErrorMessage;

/**
 *  [Output only] If operation fails, the HTTP error status code returned.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *httpErrorStatusCode;

/**
 *  [Output Only] Unique identifier for the resource, generated by the server.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/**
 *  [Output Only] The time that this operation was requested, in RFC3339 text
 *  format.
 */
@property(nonatomic, copy, nullable) NSString *insertTime;

/** [Output only] Type of the resource. */
@property(nonatomic, copy, nullable) NSString *kind;

/** [Output Only] Name of the resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  [Output only] Type of the operation. Operations include insert, update, and
 *  delete.
 */
@property(nonatomic, copy, nullable) NSString *operationType;

/**
 *  [Output only] An optional progress indicator that ranges from 0 to 100.
 *  There is no requirement that this be linear or support any granularity of
 *  operations. This should not be used to guess at when the operation will be
 *  complete. This number should be monotonically increasing as the operation
 *  progresses.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *progress;

/**
 *  [Output Only] URL of the region where the operation resides. Only available
 *  when performing regional operations.
 */
@property(nonatomic, copy, nullable) NSString *region;

/** [Output Only] Server-defined fully-qualified URL for this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  [Output Only] The time that this operation was started by the server, in
 *  RFC3339 text format.
 */
@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  [Output Only] Status of the operation.
 *
 *  Likely values:
 *    @arg @c kGTLRReplicapool_Operation_Status_Done Value "DONE"
 *    @arg @c kGTLRReplicapool_Operation_Status_Pending Value "PENDING"
 *    @arg @c kGTLRReplicapool_Operation_Status_Running Value "RUNNING"
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  [Output Only] An optional textual description of the current status of the
 *  operation.
 */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/**
 *  [Output Only] Unique target ID which identifies a particular incarnation of
 *  the target.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *targetId;

/** [Output only] URL of the resource the operation is mutating. */
@property(nonatomic, copy, nullable) NSString *targetLink;

/**
 *  [Output Only] User who requested the operation, for example:
 *  user\@example.com.
 */
@property(nonatomic, copy, nullable) NSString *user;

/**
 *  [Output Only] If there are issues with this operation, a warning is
 *  returned.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_Operation_Warnings_Item *> *warnings;

/**
 *  [Output Only] URL of the zone where the operation resides. Only available
 *  when performing per-zone operations.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

@end


/**
 *  [Output Only] If errors occurred during processing of this operation, this
 *  field will be populated.
 */
@interface GTLRReplicapool_Operation_Error : GTLRObject

/**
 *  [Output Only] The array of errors encountered while processing this
 *  operation.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_Operation_Error_Errors_Item *> *errors;

@end


/**
 *  GTLRReplicapool_Operation_Warnings_Item
 */
@interface GTLRReplicapool_Operation_Warnings_Item : GTLRObject

/**
 *  [Output only] The warning type identifier for this warning.
 *
 *  Likely values:
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_DeprecatedResourceUsed
 *        Value "DEPRECATED_RESOURCE_USED"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_DiskSizeLargerThanImageSize
 *        Value "DISK_SIZE_LARGER_THAN_IMAGE_SIZE"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_InjectedKernelsDeprecated
 *        Value "INJECTED_KERNELS_DEPRECATED"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopAddressNotAssigned
 *        Value "NEXT_HOP_ADDRESS_NOT_ASSIGNED"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopCannotIpForward
 *        Value "NEXT_HOP_CANNOT_IP_FORWARD"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopInstanceNotFound
 *        Value "NEXT_HOP_INSTANCE_NOT_FOUND"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopInstanceNotOnNetwork
 *        Value "NEXT_HOP_INSTANCE_NOT_ON_NETWORK"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NextHopNotRunning
 *        Value "NEXT_HOP_NOT_RUNNING"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_NoResultsOnPage
 *        Value "NO_RESULTS_ON_PAGE"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_RequiredTosAgreement
 *        Value "REQUIRED_TOS_AGREEMENT"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_ResourceNotDeleted
 *        Value "RESOURCE_NOT_DELETED"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_SingleInstancePropertyTemplate
 *        Value "SINGLE_INSTANCE_PROPERTY_TEMPLATE"
 *    @arg @c kGTLRReplicapool_Operation_Warnings_Item_Code_Unreachable Value
 *        "UNREACHABLE"
 */
@property(nonatomic, copy, nullable) NSString *code;

/** [Output only] Metadata for this warning in key:value format. */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_Operation_Warnings_Item_Data_Item *> *data;

/** [Output only] Optional human-readable details for this warning. */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRReplicapool_Operation_Error_Errors_Item
 */
@interface GTLRReplicapool_Operation_Error_Errors_Item : GTLRObject

/** [Output Only] The error type identifier for this error. */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  [Output Only] Indicates the field in the request which caused the error.
 *  This property is optional.
 */
@property(nonatomic, copy, nullable) NSString *location;

/** [Output Only] An optional, human-readable error message. */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRReplicapool_Operation_Warnings_Item_Data_Item
 */
@interface GTLRReplicapool_Operation_Warnings_Item_Data_Item : GTLRObject

/** [Output Only] Metadata key for this warning. */
@property(nonatomic, copy, nullable) NSString *key;

/** [Output Only] Metadata value for this warning. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  GTLRReplicapool_OperationList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRReplicapool_OperationList : GTLRCollectionObject

/**
 *  Unique identifier for the resource; defined by the server (output only).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The operation resources.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicapool_Operation *> *items;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

/** A token used to continue a truncated list request (output only). */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** Server defined URL for this resource (output only). */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop