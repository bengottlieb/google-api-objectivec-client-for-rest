// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Compute Engine API (compute/v1)
// Description:
//   Creates and runs virtual machines on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/compute/

#import <GoogleAPIClientForREST/GTLRService.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCompute;
/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeComputeCloudPlatform;
/**
 *  Authorization scope: Manage your data and permissions in Cloud Storage and
 *  see the email address for your Google Account
 *
 *  Value "https://www.googleapis.com/auth/devstorage.full_control"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeComputeDevstorageFullControl;
/**
 *  Authorization scope: View your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeComputeDevstorageReadOnly;
/**
 *  Authorization scope: Manage your data in Cloud Storage and see the email
 *  address of your Google Account
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_write"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeComputeDevstorageReadWrite;
/**
 *  Authorization scope: View your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeComputeReadonly;

// ----------------------------------------------------------------------------
//   GTLRComputeService
//

/**
 *  Service for executing Compute Engine API queries.
 *
 *  Creates and runs virtual machines on Google Cloud Platform.
 */
@interface GTLRComputeService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRComputeQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop