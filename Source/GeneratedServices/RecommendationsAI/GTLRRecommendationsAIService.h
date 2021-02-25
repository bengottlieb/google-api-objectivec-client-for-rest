// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Recommendations AI (Beta) (recommendationengine/v1beta1)
// Description:
//   Note that we now highly recommend new customers to use Retail API, which
//   incorporates the GA version of the Recommendations AI funtionalities. To
//   enable Retail API, please visit
//   https://console.cloud.google.com/apis/library/retail.googleapis.com. The
//   Recommendations AI service enables customers to build end-to-end
//   personalized recommendation systems without requiring a high level of
//   expertise in machine learning, recommendation system, or Google Cloud.
// Documentation:
//   https://cloud.google.com/recommendations-ai/docs

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scope

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeRecommendationsAICloudPlatform;

// ----------------------------------------------------------------------------
//   GTLRRecommendationsAIService
//

/**
 *  Service for executing Recommendations AI (Beta) queries.
 *
 *  Note that we now highly recommend new customers to use Retail API, which
 *  incorporates the GA version of the Recommendations AI funtionalities. To
 *  enable Retail API, please visit
 *  https://console.cloud.google.com/apis/library/retail.googleapis.com. The
 *  Recommendations AI service enables customers to build end-to-end
 *  personalized recommendation systems without requiring a high level of
 *  expertise in machine learning, recommendation system, or Google Cloud.
 */
@interface GTLRRecommendationsAIService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRRecommendationsAIQuery.h. The query can the be sent with GTLRService's
// execute methods,
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