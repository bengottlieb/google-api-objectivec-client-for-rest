// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   DoubleClick Bid Manager API (doubleclickbidmanager/v2)
// Description:
//   DoubleClick Bid Manager API allows users to manage and create campaigns and
//   reports.
// Documentation:
//   https://developers.google.com/bid-manager/

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDoubleClickBidManager_ChannelGrouping;
@class GTLRDoubleClickBidManager_DataRange;
@class GTLRDoubleClickBidManager_Date;
@class GTLRDoubleClickBidManager_DisjunctiveMatchStatement;
@class GTLRDoubleClickBidManager_EventFilter;
@class GTLRDoubleClickBidManager_FilterPair;
@class GTLRDoubleClickBidManager_Options;
@class GTLRDoubleClickBidManager_Parameters;
@class GTLRDoubleClickBidManager_PathFilter;
@class GTLRDoubleClickBidManager_PathQueryOptions;
@class GTLRDoubleClickBidManager_PathQueryOptionsFilter;
@class GTLRDoubleClickBidManager_Query;
@class GTLRDoubleClickBidManager_QueryMetadata;
@class GTLRDoubleClickBidManager_QuerySchedule;
@class GTLRDoubleClickBidManager_Report;
@class GTLRDoubleClickBidManager_ReportKey;
@class GTLRDoubleClickBidManager_ReportMetadata;
@class GTLRDoubleClickBidManager_ReportStatus;
@class GTLRDoubleClickBidManager_Rule;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_DataRange.range

/**
 *  All time for which data is available, excluding the current day.
 *
 *  Value: "ALL_TIME"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_AllTime;
/**
 *  Current day.
 *
 *  Value: "CURRENT_DAY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_CurrentDay;
/**
 *  Custom range specified by custom_start_date and custom_end_date fields.
 *
 *  Value: "CUSTOM_DATES"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_CustomDates;
/**
 *  The previous 14 days, excluding the current day.
 *
 *  Value: "LAST_14_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last14Days;
/**
 *  The previous 30 days, excluding the current day.
 *
 *  Value: "LAST_30_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last30Days;
/**
 *  The previous 365 days, excluding the current day.
 *
 *  Value: "LAST_365_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last365Days;
/**
 *  The previous 60 days, excluding the current day.
 *
 *  Value: "LAST_60_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last60Days;
/**
 *  The previous 7 days, excluding the current day.
 *
 *  Value: "LAST_7_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last7Days;
/**
 *  The previous 90 days, excluding the current day.
 *
 *  Value: "LAST_90_DAYS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_Last90Days;
/**
 *  All days, including the current day, since the start of the current month.
 *
 *  Value: "MONTH_TO_DATE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_MonthToDate;
/**
 *  Previous day.
 *
 *  Value: "PREVIOUS_DAY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_PreviousDay;
/**
 *  The previous completed calendar month.
 *
 *  Value: "PREVIOUS_MONTH"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_PreviousMonth;
/**
 *  The previous completed quarter.
 *
 *  Value: "PREVIOUS_QUARTER"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_PreviousQuarter;
/**
 *  The previous completed week, beginning from Sunday.
 *
 *  Value: "PREVIOUS_WEEK"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_PreviousWeek;
/**
 *  The previous completed calendar year.
 *
 *  Value: "PREVIOUS_YEAR"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_PreviousYear;
/**
 *  All days, including the current day, since the start of the current quarter.
 *
 *  Value: "QUARTER_TO_DATE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_QuarterToDate;
/**
 *  Default value when range is not specified or is unknown in this version.
 *
 *  Value: "RANGE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_RangeUnspecified;
/**
 *  All days, including the current day, since the most recent Sunday.
 *
 *  Value: "WEEK_TO_DATE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_WeekToDate;
/**
 *  All days, including the current day, since the start of the current calendar
 *  year.
 *
 *  Value: "YEAR_TO_DATE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_DataRange_Range_YearToDate;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_Parameters.type

/**
 *  Audience Composition report.
 *
 *  Value: "AUDIENCE_COMPOSITION"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_AudienceComposition;
/**
 *  Floodlight report.
 *
 *  Value: "FLOODLIGHT"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_Floodlight;
/**
 *  Full Path report.
 *
 *  Value: "FULL_PATH"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_FullPath;
/**
 *  GRP report.
 *
 *  Value: "GRP"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_Grp;
/**
 *  Inventory Availability report.
 *
 *  Value: "INVENTORY_AVAILABILITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_InventoryAvailability;
/**
 *  Path Attribution report.
 *
 *  Value: "PATH_ATTRIBUTION"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_PathAttribution;
/**
 *  Reach report.
 *
 *  Value: "REACH"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_Reach;
/**
 *  Default value when report type is not specified or is unknown in this
 *  version.
 *
 *  Value: "REPORT_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_ReportTypeUnspecified;
/**
 *  Standard report.
 *
 *  Value: "STANDARD"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_Standard;
/**
 *  Unique Reach Audience report.
 *
 *  Value: "UNIQUE_REACH_AUDIENCE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_UniqueReachAudience;
/**
 *  YouTube report.
 *
 *  Value: "YOUTUBE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_Youtube;
/**
 *  YouTube Programmatic Guaranteed report.
 *
 *  Value: "YOUTUBE_PROGRAMMATIC_GUARANTEED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_Parameters_Type_YoutubeProgrammaticGuaranteed;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_PathFilter.pathMatchPosition

/**
 *  Any position in the path.
 *
 *  Value: "ANY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_Any;
/**
 *  The first position in the path.
 *
 *  Value: "FIRST"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_First;
/**
 *  The last position in the path.
 *
 *  Value: "LAST"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_Last;
/**
 *  Default value when path match position is not specified or is unknown in
 *  this version.
 *
 *  Value: "PATH_MATCH_POSITION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_PathMatchPositionUnspecified;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_PathQueryOptionsFilter.match

/**
 *  Begins with a value.
 *
 *  Value: "BEGINS_WITH"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_BeginsWith;
/**
 *  Matches a value exactly.
 *
 *  Value: "EXACT"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Exact;
/**
 *  Matches a value partially.
 *
 *  Value: "PARTIAL"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Partial;
/**
 *  Default value when match is not specified or is unknown in this version.
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Unknown;
/**
 *  Matches a value, utilizing wildcard character logic in the value.
 *
 *  Value: "WILDCARD_EXPRESSION"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_WildcardExpression;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_QueryMetadata.format

/**
 *  CSV.
 *
 *  Value: "CSV"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QueryMetadata_Format_Csv;
/**
 *  Default value when format is not specified or is unknown in this version.
 *
 *  Value: "FORMAT_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QueryMetadata_Format_FormatUnspecified;
/**
 *  Excel.
 *
 *  Value: "XLSX"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QueryMetadata_Format_Xlsx;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_QuerySchedule.frequency

/**
 *  Once a day.
 *
 *  Value: "DAILY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Daily;
/**
 *  Default value when frequency is not specified or is unknown in this version.
 *
 *  Value: "FREQUENCY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_FrequencyUnspecified;
/**
 *  Once a month.
 *
 *  Value: "MONTHLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Monthly;
/**
 *  Only once.
 *
 *  Value: "ONE_TIME"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_OneTime;
/**
 *  Once a quarter
 *
 *  Value: "QUARTERLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Quarterly;
/**
 *  Twice a month.
 *
 *  Value: "SEMI_MONTHLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_SemiMonthly;
/**
 *  Once a week.
 *
 *  Value: "WEEKLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Weekly;
/**
 *  Once a year.
 *
 *  Value: "YEARLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Yearly;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_ReportStatus.format

/**
 *  CSV.
 *
 *  Value: "CSV"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_Format_Csv;
/**
 *  Default value when format is not specified or is unknown in this version.
 *
 *  Value: "FORMAT_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_Format_FormatUnspecified;
/**
 *  Excel.
 *
 *  Value: "XLSX"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_Format_Xlsx;

// ----------------------------------------------------------------------------
// GTLRDoubleClickBidManager_ReportStatus.state

/**
 *  The report has finished running successfully.
 *
 *  Value: "DONE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_State_Done;
/**
 *  The report has finished running in failure.
 *
 *  Value: "FAILED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_State_Failed;
/**
 *  The report is queued to run.
 *
 *  Value: "QUEUED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_State_Queued;
/**
 *  The report is currently running.
 *
 *  Value: "RUNNING"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_State_Running;
/**
 *  Default value when state is not specified or is unknown in this version.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDoubleClickBidManager_ReportStatus_State_StateUnspecified;

/**
 *  A channel grouping defines a set of rules that can be used to categorize
 *  events in a path report.
 */
@interface GTLRDoubleClickBidManager_ChannelGrouping : GTLRObject

/**
 *  The name to apply to an event that does not match any of the rules in the
 *  channel grouping.
 */
@property(nonatomic, copy, nullable) NSString *fallbackName;

/** Channel Grouping name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Rules within Channel Grouping. There is a limit of 100 rules that can be set
 *  per channel grouping.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_Rule *> *rules;

@end


/**
 *  Report data range.
 */
@interface GTLRDoubleClickBidManager_DataRange : GTLRObject

/**
 *  The ending date for the data that is shown in the report. Note,
 *  `customEndDate` is required if `range` is `CUSTOM_DATES` and ignored
 *  otherwise.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *customEndDate;

/**
 *  The starting data for the data that is shown in the report. Note,
 *  `customStartDate` is required if `range` is `CUSTOM_DATES` and ignored
 *  otherwise.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *customStartDate;

/**
 *  Report data range used to generate the report.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_AllTime All time for
 *        which data is available, excluding the current day. (Value:
 *        "ALL_TIME")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_CurrentDay Current day.
 *        (Value: "CURRENT_DAY")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_CustomDates Custom
 *        range specified by custom_start_date and custom_end_date fields.
 *        (Value: "CUSTOM_DATES")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last14Days The previous
 *        14 days, excluding the current day. (Value: "LAST_14_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last30Days The previous
 *        30 days, excluding the current day. (Value: "LAST_30_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last365Days The
 *        previous 365 days, excluding the current day. (Value: "LAST_365_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last60Days The previous
 *        60 days, excluding the current day. (Value: "LAST_60_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last7Days The previous
 *        7 days, excluding the current day. (Value: "LAST_7_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_Last90Days The previous
 *        90 days, excluding the current day. (Value: "LAST_90_DAYS")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_MonthToDate All days,
 *        including the current day, since the start of the current month.
 *        (Value: "MONTH_TO_DATE")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_PreviousDay Previous
 *        day. (Value: "PREVIOUS_DAY")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_PreviousMonth The
 *        previous completed calendar month. (Value: "PREVIOUS_MONTH")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_PreviousQuarter The
 *        previous completed quarter. (Value: "PREVIOUS_QUARTER")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_PreviousWeek The
 *        previous completed week, beginning from Sunday. (Value:
 *        "PREVIOUS_WEEK")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_PreviousYear The
 *        previous completed calendar year. (Value: "PREVIOUS_YEAR")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_QuarterToDate All days,
 *        including the current day, since the start of the current quarter.
 *        (Value: "QUARTER_TO_DATE")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_RangeUnspecified
 *        Default value when range is not specified or is unknown in this
 *        version. (Value: "RANGE_UNSPECIFIED")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_WeekToDate All days,
 *        including the current day, since the most recent Sunday. (Value:
 *        "WEEK_TO_DATE")
 *    @arg @c kGTLRDoubleClickBidManager_DataRange_Range_YearToDate All days,
 *        including the current day, since the start of the current calendar
 *        year. (Value: "YEAR_TO_DATE")
 */
@property(nonatomic, copy, nullable) NSString *range;

@end


/**
 *  Represents a whole or partial calendar date, such as a birthday. The time of
 *  day and time zone are either specified elsewhere or are insignificant. The
 *  date is relative to the Gregorian Calendar. This can represent one of the
 *  following: * A full date, with non-zero year, month, and day values. * A
 *  month and day, with a zero year (for example, an anniversary). * A year on
 *  its own, with a zero month and a zero day. * A year and month, with a zero
 *  day (for example, a credit card expiration date). Related types: *
 *  google.type.TimeOfDay * google.type.DateTime * google.protobuf.Timestamp
 */
@interface GTLRDoubleClickBidManager_Date : GTLRObject

/**
 *  Day of a month. Must be from 1 to 31 and valid for the year and month, or 0
 *  to specify a year by itself or a year and month where the day isn't
 *  significant.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *day;

/**
 *  Month of a year. Must be from 1 to 12, or 0 to specify a year without a
 *  month and day.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *month;

/**
 *  Year of the date. Must be from 1 to 9999, or 0 to specify a date without a
 *  year.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *year;

@end


/**
 *  DisjunctiveMatchStatement that OR's all contained filters.
 */
@interface GTLRDoubleClickBidManager_DisjunctiveMatchStatement : GTLRObject

/**
 *  Filters. There is a limit of 100 filters that can be set per disjunctive
 *  match statement.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_EventFilter *> *eventFilters;

@end


/**
 *  Defines the type of filter to be applied to the path, a DV360 event
 *  dimension filter.
 */
@interface GTLRDoubleClickBidManager_EventFilter : GTLRObject

/** Filter on a dimension. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_PathQueryOptionsFilter *dimensionFilter;

@end


/**
 *  Filter used to match traffic data in your report.
 */
@interface GTLRDoubleClickBidManager_FilterPair : GTLRObject

/** Filter type. */
@property(nonatomic, copy, nullable) NSString *type;

/** Filter value. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  GTLRDoubleClickBidManager_ListQueriesResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "queries" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDoubleClickBidManager_ListQueriesResponse : GTLRCollectionObject

/**
 *  A token, which can be sent as page_token to retrieve the next page of
 *  queries. If this field is omitted, there are no subsequent pages.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of queries.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_Query *> *queries;

@end


/**
 *  GTLRDoubleClickBidManager_ListReportsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "reports" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDoubleClickBidManager_ListReportsResponse : GTLRCollectionObject

/**
 *  A token, which can be sent as page_token to retrieve the next page of
 *  reports. If this field is omitted, there are no subsequent pages.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  Retrieved reports.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_Report *> *reports;

@end


/**
 *  Additional query options.
 */
@interface GTLRDoubleClickBidManager_Options : GTLRObject

/**
 *  Set to true and filter your report by `FILTER_INSERTION_ORDER` or
 *  `FILTER_LINE_ITEM` to include data for audience lists specifically targeted
 *  by those items.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *includeOnlyTargetedUserLists;

/** Options that contain Path Filters and Custom Channel Groupings. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_PathQueryOptions *pathQueryOptions;

@end


/**
 *  Parameters of a query or report.
 */
@interface GTLRDoubleClickBidManager_Parameters : GTLRObject

/** Filters used to match traffic data in your report. */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_FilterPair *> *filters;

/** Data is grouped by the filters listed in this field. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *groupBys;

/** Metrics to include as columns in your report. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *metrics;

/** Additional query options. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Options *options;

/**
 *  The type of the report. The type of the report will dictate what dimesions,
 *  filters, and metrics can be used.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_AudienceComposition
 *        Audience Composition report. (Value: "AUDIENCE_COMPOSITION")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_Floodlight Floodlight
 *        report. (Value: "FLOODLIGHT")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_FullPath Full Path
 *        report. (Value: "FULL_PATH")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_Grp GRP report. (Value:
 *        "GRP")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_InventoryAvailability
 *        Inventory Availability report. (Value: "INVENTORY_AVAILABILITY")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_PathAttribution Path
 *        Attribution report. (Value: "PATH_ATTRIBUTION")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_Reach Reach report.
 *        (Value: "REACH")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_ReportTypeUnspecified
 *        Default value when report type is not specified or is unknown in this
 *        version. (Value: "REPORT_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_Standard Standard
 *        report. (Value: "STANDARD")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_UniqueReachAudience
 *        Unique Reach Audience report. (Value: "UNIQUE_REACH_AUDIENCE")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_Youtube YouTube report.
 *        (Value: "YOUTUBE")
 *    @arg @c kGTLRDoubleClickBidManager_Parameters_Type_YoutubeProgrammaticGuaranteed
 *        YouTube Programmatic Guaranteed report. (Value:
 *        "YOUTUBE_PROGRAMMATIC_GUARANTEED")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Path filters specify which paths to include in a report. A path is the
 *  result of combining DV360 events based on User ID to create a workflow of
 *  users' actions. When a path filter is set, the resulting report will only
 *  include paths that match the specified event at the specified position. All
 *  other paths will be excluded.
 */
@interface GTLRDoubleClickBidManager_PathFilter : GTLRObject

/** Filter on an event to be applied to some part of the path. */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_EventFilter *> *eventFilters;

/**
 *  The position of the path the filter should match to (first, last, or any
 *  event in path).
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_Any Any
 *        position in the path. (Value: "ANY")
 *    @arg @c kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_First The
 *        first position in the path. (Value: "FIRST")
 *    @arg @c kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_Last The
 *        last position in the path. (Value: "LAST")
 *    @arg @c kGTLRDoubleClickBidManager_PathFilter_PathMatchPosition_PathMatchPositionUnspecified
 *        Default value when path match position is not specified or is unknown
 *        in this version. (Value: "PATH_MATCH_POSITION_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *pathMatchPosition;

@end


/**
 *  Path Query Options for Report Options.
 */
@interface GTLRDoubleClickBidManager_PathQueryOptions : GTLRObject

/** Custom Channel Groupings. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_ChannelGrouping *channelGrouping;

/**
 *  Path Filters. There is a limit of 100 path filters that can be set per
 *  report.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_PathFilter *> *pathFilters;

@end


/**
 *  Dimension filter on path events.
 */
@interface GTLRDoubleClickBidManager_PathQueryOptionsFilter : GTLRObject

/** Dimension the filter is applied to. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Match logic of the filter.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_BeginsWith
 *        Begins with a value. (Value: "BEGINS_WITH")
 *    @arg @c kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Exact
 *        Matches a value exactly. (Value: "EXACT")
 *    @arg @c kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Partial
 *        Matches a value partially. (Value: "PARTIAL")
 *    @arg @c kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_Unknown
 *        Default value when match is not specified or is unknown in this
 *        version. (Value: "UNKNOWN")
 *    @arg @c kGTLRDoubleClickBidManager_PathQueryOptionsFilter_Match_WildcardExpression
 *        Matches a value, utilizing wildcard character logic in the value.
 *        (Value: "WILDCARD_EXPRESSION")
 */
@property(nonatomic, copy, nullable) NSString *match;

/** Values to filter on. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *values;

@end


/**
 *  Represents a query.
 */
@interface GTLRDoubleClickBidManager_Query : GTLRObject

/** Query metadata. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_QueryMetadata *metadata;

/** Query parameters. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Parameters *params;

/**
 *  Output only. Query ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *queryId;

/**
 *  Information on how often and when to run a query. If `ONE_TIME` is set to
 *  the frequency field, the query will only be run at the time of creation.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_QuerySchedule *schedule;

@end


/**
 *  Query metadata.
 */
@interface GTLRDoubleClickBidManager_QueryMetadata : GTLRObject

/**
 *  Range of report data. All reports will be based on the same time zone as
 *  used by the advertiser.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_DataRange *dataRange;

/**
 *  Format of the generated report.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_QueryMetadata_Format_Csv CSV. (Value:
 *        "CSV")
 *    @arg @c kGTLRDoubleClickBidManager_QueryMetadata_Format_FormatUnspecified
 *        Default value when format is not specified or is unknown in this
 *        version. (Value: "FORMAT_UNSPECIFIED")
 *    @arg @c kGTLRDoubleClickBidManager_QueryMetadata_Format_Xlsx Excel.
 *        (Value: "XLSX")
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  Whether to send an email notification when a report is ready. Defaults to
 *  false.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *sendNotification;

/**
 *  List of email addresses which are sent email notifications when the report
 *  is finished. Separate from send_notification.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *shareEmailAddress;

/** Query title. It is used to name the reports generated from this query. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Information on when and how frequently to run a query.
 */
@interface GTLRDoubleClickBidManager_QuerySchedule : GTLRObject

/**
 *  Date to periodically run the query until. Not applicable to `ONE_TIME`
 *  frequency.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *endDate;

/**
 *  How often the query is run.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Daily Once a
 *        day. (Value: "DAILY")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_FrequencyUnspecified
 *        Default value when frequency is not specified or is unknown in this
 *        version. (Value: "FREQUENCY_UNSPECIFIED")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Monthly Once a
 *        month. (Value: "MONTHLY")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_OneTime Only
 *        once. (Value: "ONE_TIME")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Quarterly Once
 *        a quarter (Value: "QUARTERLY")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_SemiMonthly
 *        Twice a month. (Value: "SEMI_MONTHLY")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Weekly Once a
 *        week. (Value: "WEEKLY")
 *    @arg @c kGTLRDoubleClickBidManager_QuerySchedule_Frequency_Yearly Once a
 *        year. (Value: "YEARLY")
 */
@property(nonatomic, copy, nullable) NSString *frequency;

/**
 *  Canonical timezone code for report generation time. Defaults to
 *  `America/New_York`.
 */
@property(nonatomic, copy, nullable) NSString *nextRunTimezoneCode;

/**
 *  When to start running the query. Not applicable to `ONE_TIME` frequency.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *startDate;

@end


/**
 *  Represents a report.
 */
@interface GTLRDoubleClickBidManager_Report : GTLRObject

/** Key used to identify a report. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_ReportKey *key;

/** Report metadata. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_ReportMetadata *metadata;

/** Report parameters. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Parameters *params;

@end


/**
 *  Key used to identify a report.
 */
@interface GTLRDoubleClickBidManager_ReportKey : GTLRObject

/**
 *  Output only. Query ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *queryId;

/**
 *  Output only. Report ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *reportId;

@end


/**
 *  Report metadata.
 */
@interface GTLRDoubleClickBidManager_ReportMetadata : GTLRObject

/**
 *  Output only. The path to the location in Google Cloud Storage where the
 *  report is stored.
 */
@property(nonatomic, copy, nullable) NSString *googleCloudStoragePath;

/** The ending time for the data that is shown in the report. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *reportDataEndDate;

/** The starting time for the data that is shown in the report. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_Date *reportDataStartDate;

/** Report status. */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_ReportStatus *status;

@end


/**
 *  Report status.
 */
@interface GTLRDoubleClickBidManager_ReportStatus : GTLRObject

/**
 *  Output only. The time when this report either completed successfully or
 *  failed.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *finishTime;

/**
 *  The file type of the report.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_Format_Csv CSV. (Value:
 *        "CSV")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_Format_FormatUnspecified
 *        Default value when format is not specified or is unknown in this
 *        version. (Value: "FORMAT_UNSPECIFIED")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_Format_Xlsx Excel. (Value:
 *        "XLSX")
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  Output only. The state of the report.
 *
 *  Likely values:
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_State_Done The report has
 *        finished running successfully. (Value: "DONE")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_State_Failed The report
 *        has finished running in failure. (Value: "FAILED")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_State_Queued The report is
 *        queued to run. (Value: "QUEUED")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_State_Running The report
 *        is currently running. (Value: "RUNNING")
 *    @arg @c kGTLRDoubleClickBidManager_ReportStatus_State_StateUnspecified
 *        Default value when state is not specified or is unknown in this
 *        version. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  A Rule defines a name, and a boolean expression in [conjunctive normal form]
 *  (http://mathworld.wolfram.com/ConjunctiveNormalForm.html){.external} that
 *  can be applied to a path event to determine if that name should be applied.
 */
@interface GTLRDoubleClickBidManager_Rule : GTLRObject

/**
 *  DisjunctiveMatchStatements within a Rule. DisjunctiveMatchStatement OR's all
 *  contained filters.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDoubleClickBidManager_DisjunctiveMatchStatement *> *disjunctiveMatchStatements;

/** Rule name. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Request to run a stored query to generate a report.
 */
@interface GTLRDoubleClickBidManager_RunQueryRequest : GTLRObject

/**
 *  Report data range used to generate the report. If unspecified, the original
 *  parent query's data range is used.
 */
@property(nonatomic, strong, nullable) GTLRDoubleClickBidManager_DataRange *dataRange;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop