#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedPlatformFileStore, SharedPlatformSettingStore, SharedWeatherClientCompanion, SharedMetricUnit, SharedCachePolicy, SharedHistoricalWeather, SharedResponse<__covariant R>, SharedRealtimeWeather, SharedWeatherForecast, SharedSerializationHelper, SharedKotlinx_serialization_jsonJson, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedLogLevel, SharedKotlinArray<T>, SharedLogger, SharedKotlinException, SharedPlatformLogger, SharedMetricUnitCompanion, SharedError, SharedResponseFailure, SharedKotlinNothing, SharedResponseFromCache<WeatherInformation>, SharedResponseSuccess<WeatherInformation>, SharedCachePolicyCompanion, SharedKotlinx_datetimeInstant, SharedDataValuesDailyCompanion, SharedDataValuesDaily, SharedWeatherCode, SharedDataValuesHourlyCompanion, SharedDataValuesHourly, SharedDataValuesMinutelyCompanion, SharedDataValuesMinutely, SharedErrorCompanion, SharedLocation, SharedHistoricalWeatherTimeline, SharedHistoricalWeatherCompanion, SharedTimelineItem<__covariant E>, SharedHistoricalWeatherTimelineCompanion, SharedLocationCompanion, SharedRealtimeWeatherCompanion, SharedTimelineItemCompanion, SharedWeatherCodeCompanion, SharedWeatherCodeDayTime, SharedWeatherForecastTimelines, SharedWeatherForecastCompanion, SharedWeatherForecastTimelinesCompanion, SharedKotlinx_datetimeClockSystem, SharedKotlinx_datetimeLocalDateTime, SharedKotlinx_datetimeMonth, SharedKotlinx_datetimeLocalDateCompanion, SharedKotlinx_datetimeLocalDate, SharedKotlinx_datetimeDayOfWeek, NSDate, SharedKotlinx_datetimeLocalTime, SharedKotlinx_datetimeLocalDateTimeCompanion, SharedKotlinThrowable, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_jsonJsonDefault, SharedKotlinx_serialization_jsonJsonElement, SharedKotlinx_serialization_jsonJsonConfiguration, SharedKotlinx_datetimeInstantCompanion, SharedKotlinx_datetimeLocalTimeCompanion, SharedKotlinx_serialization_jsonJsonElementCompanion, SharedKotlinx_serialization_jsonClassDiscriminatorMode, SharedKotlinx_serialization_coreSerialKind, SharedKotlinx_datetimePadding, SharedKotlinx_datetimeDayOfWeekNames, SharedKotlinx_datetimeMonthNames, SharedKotlinx_datetimeDayOfWeekNamesCompanion, SharedKotlinx_datetimeMonthNamesCompanion;

@protocol SharedKotlinComparable, SharedKotlinx_serialization_coreKSerializer, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_datetimeClock, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreSerialFormat, SharedKotlinx_serialization_coreStringFormat, SharedKotlinIterator, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_datetimeDateTimeFormat, SharedKotlinx_datetimeDateTimeFormatBuilderWithDate, SharedKotlinx_datetimeDateTimeFormatBuilderWithDateTime, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinx_serialization_jsonJsonNamingStrategy, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinAppendable, SharedKotlinx_datetimeDateTimeFormatBuilder, SharedKotlinx_datetimeDateTimeFormatBuilderWithTime, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherClient")))
@interface SharedWeatherClient : SharedBase
- (instancetype)initWithAppId:(NSString *)appId platformFileStore:(SharedPlatformFileStore *)platformFileStore platformSettingStore:(SharedPlatformSettingStore *)platformSettingStore __attribute__((swift_name("init(appId:platformFileStore:platformSettingStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWeatherClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestHistoricalWeatherLatitude:(double)latitude longitude:(double)longitude units:(SharedMetricUnit *)units cachePolicy:(SharedCachePolicy *)cachePolicy completionHandler:(void (^)(SharedResponse<SharedHistoricalWeather *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestHistoricalWeather(latitude:longitude:units:cachePolicy:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestRealtimeWeatherLatitude:(double)latitude longitude:(double)longitude units:(SharedMetricUnit *)units cachePolicy:(SharedCachePolicy *)cachePolicy completionHandler:(void (^)(SharedResponse<SharedRealtimeWeather *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestRealtimeWeather(latitude:longitude:units:cachePolicy:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestWeatherForecastLatitude:(double)latitude longitude:(double)longitude units:(SharedMetricUnit *)units cachePolicy:(SharedCachePolicy *)cachePolicy completionHandler:(void (^)(SharedResponse<SharedWeatherForecast *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestWeatherForecast(latitude:longitude:units:cachePolicy:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherClient.Companion")))
@interface SharedWeatherClientCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherClientCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeocodingHelper")))
@interface SharedGeocodingHelper : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getLocalityLatitude:(double)latitude longitude:(double)longitude completion:(void (^)(NSString * _Nullable))completion __attribute__((swift_name("getLocality(latitude:longitude:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializationHelper")))
@interface SharedSerializationHelper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializationHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSerializationHelper *shared __attribute__((swift_name("shared")));
- (SharedKotlinx_serialization_jsonJson *)jsonBuilder __attribute__((swift_name("jsonBuilder()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface SharedLogLevel : SharedKotlinEnum<SharedLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) SharedLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedLogLevel *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLogLevel *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface SharedLogger : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLogger *shared __attribute__((swift_name("shared")));
- (void)dCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("d(calledClass:calledMethod:extra:)")));
- (void)eCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra error:(SharedKotlinException * _Nullable)error __attribute__((swift_name("e(calledClass:calledMethod:extra:error:)")));
- (void)iCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("i(calledClass:calledMethod:extra:)")));
- (void)setLevelLevel:(SharedLogLevel *)level __attribute__((swift_name("setLevel(level:)")));
- (void)wCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("w(calledClass:calledMethod:extra:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformLogger")))
@interface SharedPlatformLogger : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPlatformLogger *shared __attribute__((swift_name("shared")));
- (void)dCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("d(calledClass:calledMethod:extra:)")));
- (void)eCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra error:(SharedKotlinException * _Nullable)error __attribute__((swift_name("e(calledClass:calledMethod:extra:error:)")));
- (void)iCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("i(calledClass:calledMethod:extra:)")));
- (void)wCalledClass:(NSString *)calledClass calledMethod:(NSString *)calledMethod extra:(NSString * _Nullable)extra __attribute__((swift_name("w(calledClass:calledMethod:extra:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetricUnit")))
@interface SharedMetricUnit : SharedKotlinEnum<SharedMetricUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedMetricUnitCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedMetricUnit *metric __attribute__((swift_name("metric")));
@property (class, readonly) SharedMetricUnit *imperial __attribute__((swift_name("imperial")));
+ (SharedKotlinArray<SharedMetricUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedMetricUnit *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetricUnit.Companion")))
@interface SharedMetricUnitCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMetricUnitCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Response")))
@interface SharedResponse<__covariant R> : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseFailure")))
@interface SharedResponseFailure : SharedResponse<SharedKotlinNothing *>
- (instancetype)initWithCause:(SharedError *)cause reason:(NSString * _Nullable)reason __attribute__((swift_name("init(cause:reason:)"))) __attribute__((objc_designated_initializer));
- (SharedResponseFailure *)doCopyCause:(SharedError *)cause reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(cause:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedError *cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseFromCache")))
@interface SharedResponseFromCache<WeatherInformation> : SharedResponse<WeatherInformation>
- (instancetype)initWithData:(WeatherInformation _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (SharedResponseFromCache<WeatherInformation> *)doCopyData:(WeatherInformation _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WeatherInformation _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseSuccess")))
@interface SharedResponseSuccess<WeatherInformation> : SharedResponse<WeatherInformation>
- (instancetype)initWithData:(WeatherInformation _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (SharedResponseSuccess<WeatherInformation> *)doCopyData:(WeatherInformation _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WeatherInformation _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CachePolicy")))
@interface SharedCachePolicy : SharedBase
- (instancetype)initWithTimeToLive:(int32_t)timeToLive returnCacheAsFallback:(BOOL)returnCacheAsFallback __attribute__((swift_name("init(timeToLive:returnCacheAsFallback:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCachePolicyCompanion *companion __attribute__((swift_name("companion")));
- (SharedCachePolicy *)doCopyTimeToLive:(int32_t)timeToLive returnCacheAsFallback:(BOOL)returnCacheAsFallback __attribute__((swift_name("doCopy(timeToLive:returnCacheAsFallback:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL returnCacheAsFallback __attribute__((swift_name("returnCacheAsFallback")));
@property (readonly) int32_t timeToLive __attribute__((swift_name("timeToLive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CachePolicy.Companion")))
@interface SharedCachePolicyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCachePolicyCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedCachePolicy *DEFAULT __attribute__((swift_name("DEFAULT")));
@property (readonly) SharedCachePolicy *DISABLE_CACHE __attribute__((swift_name("DISABLE_CACHE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesDaily")))
@interface SharedDataValuesDaily : SharedBase
- (instancetype)initWithCloudBaseAvg:(double)cloudBaseAvg cloudBaseMax:(double)cloudBaseMax cloudBaseMin:(double)cloudBaseMin cloudCeilingAvg:(double)cloudCeilingAvg cloudCeilingMax:(double)cloudCeilingMax cloudCeilingMin:(double)cloudCeilingMin cloudCoverAvg:(double)cloudCoverAvg cloudCoverMax:(double)cloudCoverMax cloudCoverMin:(double)cloudCoverMin dewPointAvg:(double)dewPointAvg dewPointMax:(double)dewPointMax dewPointMin:(double)dewPointMin evapotranspirationAvg:(double)evapotranspirationAvg evapotranspirationMax:(double)evapotranspirationMax evapotranspirationMin:(double)evapotranspirationMin evapotranspirationSum:(double)evapotranspirationSum freezingRainIntensityAvg:(double)freezingRainIntensityAvg freezingRainIntensityMax:(double)freezingRainIntensityMax freezingRainIntensityMin:(double)freezingRainIntensityMin humidityAvg:(double)humidityAvg humidityMax:(double)humidityMax humidityMin:(double)humidityMin iceAccumulationAvg:(double)iceAccumulationAvg iceAccumulationLweAvg:(double)iceAccumulationLweAvg iceAccumulationLweMax:(double)iceAccumulationLweMax iceAccumulationLweMin:(double)iceAccumulationLweMin iceAccumulationMax:(double)iceAccumulationMax iceAccumulationMin:(double)iceAccumulationMin iceAccumulationSum:(double)iceAccumulationSum moonriseTime:(SharedKotlinx_datetimeInstant * _Nullable)moonriseTime moonsetTime:(SharedKotlinx_datetimeInstant * _Nullable)moonsetTime precipitationProbabilityAvg:(double)precipitationProbabilityAvg precipitationProbabilityMax:(double)precipitationProbabilityMax precipitationProbabilityMin:(double)precipitationProbabilityMin pressureSurfaceLevelAvg:(double)pressureSurfaceLevelAvg pressureSurfaceLevelMax:(double)pressureSurfaceLevelMax pressureSurfaceLevelMin:(double)pressureSurfaceLevelMin rainAccumulationAvg:(double)rainAccumulationAvg rainAccumulationLweAvg:(double)rainAccumulationLweAvg rainAccumulationLweMax:(double)rainAccumulationLweMax rainAccumulationLweMin:(double)rainAccumulationLweMin rainAccumulationMax:(double)rainAccumulationMax rainAccumulationMin:(double)rainAccumulationMin rainAccumulationSum:(double)rainAccumulationSum rainIntensityAvg:(double)rainIntensityAvg rainIntensityMax:(double)rainIntensityMax rainIntensityMin:(double)rainIntensityMin sleetAccumulationAvg:(double)sleetAccumulationAvg sleetAccumulationLweAvg:(double)sleetAccumulationLweAvg sleetAccumulationLweMax:(double)sleetAccumulationLweMax sleetAccumulationLweMin:(double)sleetAccumulationLweMin sleetAccumulationMax:(double)sleetAccumulationMax sleetAccumulationMin:(double)sleetAccumulationMin sleetIntensityAvg:(double)sleetIntensityAvg sleetIntensityMax:(double)sleetIntensityMax sleetIntensityMin:(double)sleetIntensityMin snowAccumulationAvg:(double)snowAccumulationAvg snowAccumulationLweAvg:(double)snowAccumulationLweAvg snowAccumulationLweMax:(double)snowAccumulationLweMax snowAccumulationLweMin:(double)snowAccumulationLweMin snowAccumulationMax:(double)snowAccumulationMax snowAccumulationMin:(double)snowAccumulationMin snowAccumulationSum:(double)snowAccumulationSum snowDepthAvg:(SharedDouble * _Nullable)snowDepthAvg snowDepthMax:(SharedDouble * _Nullable)snowDepthMax snowDepthMin:(SharedDouble * _Nullable)snowDepthMin snowDepthSum:(SharedDouble * _Nullable)snowDepthSum snowIntensityAvg:(double)snowIntensityAvg snowIntensityMax:(double)snowIntensityMax snowIntensityMin:(double)snowIntensityMin sunriseTime:(SharedKotlinx_datetimeInstant * _Nullable)sunriseTime sunsetTime:(SharedKotlinx_datetimeInstant * _Nullable)sunsetTime temperatureApparentAvg:(double)temperatureApparentAvg temperatureApparentMax:(double)temperatureApparentMax temperatureApparentMin:(double)temperatureApparentMin temperatureAvg:(double)temperatureAvg temperatureMax:(double)temperatureMax temperatureMin:(double)temperatureMin uvHealthConcernAvg:(SharedInt * _Nullable)uvHealthConcernAvg uvHealthConcernMax:(SharedInt * _Nullable)uvHealthConcernMax uvHealthConcernMin:(SharedInt * _Nullable)uvHealthConcernMin uvIndexAvg:(SharedInt * _Nullable)uvIndexAvg uvIndexMax:(SharedInt * _Nullable)uvIndexMax uvIndexMin:(SharedInt * _Nullable)uvIndexMin visibilityAvg:(double)visibilityAvg visibilityMax:(double)visibilityMax visibilityMin:(double)visibilityMin weatherCodeMaxValue:(int32_t)weatherCodeMaxValue weatherCodeMinValue:(int32_t)weatherCodeMinValue windDirectionAvg:(double)windDirectionAvg windGustAvg:(double)windGustAvg windGustMax:(double)windGustMax windGustMin:(double)windGustMin windSpeedAvg:(double)windSpeedAvg windSpeedMax:(double)windSpeedMax windSpeedMin:(double)windSpeedMin __attribute__((swift_name("init(cloudBaseAvg:cloudBaseMax:cloudBaseMin:cloudCeilingAvg:cloudCeilingMax:cloudCeilingMin:cloudCoverAvg:cloudCoverMax:cloudCoverMin:dewPointAvg:dewPointMax:dewPointMin:evapotranspirationAvg:evapotranspirationMax:evapotranspirationMin:evapotranspirationSum:freezingRainIntensityAvg:freezingRainIntensityMax:freezingRainIntensityMin:humidityAvg:humidityMax:humidityMin:iceAccumulationAvg:iceAccumulationLweAvg:iceAccumulationLweMax:iceAccumulationLweMin:iceAccumulationMax:iceAccumulationMin:iceAccumulationSum:moonriseTime:moonsetTime:precipitationProbabilityAvg:precipitationProbabilityMax:precipitationProbabilityMin:pressureSurfaceLevelAvg:pressureSurfaceLevelMax:pressureSurfaceLevelMin:rainAccumulationAvg:rainAccumulationLweAvg:rainAccumulationLweMax:rainAccumulationLweMin:rainAccumulationMax:rainAccumulationMin:rainAccumulationSum:rainIntensityAvg:rainIntensityMax:rainIntensityMin:sleetAccumulationAvg:sleetAccumulationLweAvg:sleetAccumulationLweMax:sleetAccumulationLweMin:sleetAccumulationMax:sleetAccumulationMin:sleetIntensityAvg:sleetIntensityMax:sleetIntensityMin:snowAccumulationAvg:snowAccumulationLweAvg:snowAccumulationLweMax:snowAccumulationLweMin:snowAccumulationMax:snowAccumulationMin:snowAccumulationSum:snowDepthAvg:snowDepthMax:snowDepthMin:snowDepthSum:snowIntensityAvg:snowIntensityMax:snowIntensityMin:sunriseTime:sunsetTime:temperatureApparentAvg:temperatureApparentMax:temperatureApparentMin:temperatureAvg:temperatureMax:temperatureMin:uvHealthConcernAvg:uvHealthConcernMax:uvHealthConcernMin:uvIndexAvg:uvIndexMax:uvIndexMin:visibilityAvg:visibilityMax:visibilityMin:weatherCodeMaxValue:weatherCodeMinValue:windDirectionAvg:windGustAvg:windGustMax:windGustMin:windSpeedAvg:windSpeedMax:windSpeedMin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDataValuesDailyCompanion *companion __attribute__((swift_name("companion")));
- (SharedDataValuesDaily *)doCopyCloudBaseAvg:(double)cloudBaseAvg cloudBaseMax:(double)cloudBaseMax cloudBaseMin:(double)cloudBaseMin cloudCeilingAvg:(double)cloudCeilingAvg cloudCeilingMax:(double)cloudCeilingMax cloudCeilingMin:(double)cloudCeilingMin cloudCoverAvg:(double)cloudCoverAvg cloudCoverMax:(double)cloudCoverMax cloudCoverMin:(double)cloudCoverMin dewPointAvg:(double)dewPointAvg dewPointMax:(double)dewPointMax dewPointMin:(double)dewPointMin evapotranspirationAvg:(double)evapotranspirationAvg evapotranspirationMax:(double)evapotranspirationMax evapotranspirationMin:(double)evapotranspirationMin evapotranspirationSum:(double)evapotranspirationSum freezingRainIntensityAvg:(double)freezingRainIntensityAvg freezingRainIntensityMax:(double)freezingRainIntensityMax freezingRainIntensityMin:(double)freezingRainIntensityMin humidityAvg:(double)humidityAvg humidityMax:(double)humidityMax humidityMin:(double)humidityMin iceAccumulationAvg:(double)iceAccumulationAvg iceAccumulationLweAvg:(double)iceAccumulationLweAvg iceAccumulationLweMax:(double)iceAccumulationLweMax iceAccumulationLweMin:(double)iceAccumulationLweMin iceAccumulationMax:(double)iceAccumulationMax iceAccumulationMin:(double)iceAccumulationMin iceAccumulationSum:(double)iceAccumulationSum moonriseTime:(SharedKotlinx_datetimeInstant * _Nullable)moonriseTime moonsetTime:(SharedKotlinx_datetimeInstant * _Nullable)moonsetTime precipitationProbabilityAvg:(double)precipitationProbabilityAvg precipitationProbabilityMax:(double)precipitationProbabilityMax precipitationProbabilityMin:(double)precipitationProbabilityMin pressureSurfaceLevelAvg:(double)pressureSurfaceLevelAvg pressureSurfaceLevelMax:(double)pressureSurfaceLevelMax pressureSurfaceLevelMin:(double)pressureSurfaceLevelMin rainAccumulationAvg:(double)rainAccumulationAvg rainAccumulationLweAvg:(double)rainAccumulationLweAvg rainAccumulationLweMax:(double)rainAccumulationLweMax rainAccumulationLweMin:(double)rainAccumulationLweMin rainAccumulationMax:(double)rainAccumulationMax rainAccumulationMin:(double)rainAccumulationMin rainAccumulationSum:(double)rainAccumulationSum rainIntensityAvg:(double)rainIntensityAvg rainIntensityMax:(double)rainIntensityMax rainIntensityMin:(double)rainIntensityMin sleetAccumulationAvg:(double)sleetAccumulationAvg sleetAccumulationLweAvg:(double)sleetAccumulationLweAvg sleetAccumulationLweMax:(double)sleetAccumulationLweMax sleetAccumulationLweMin:(double)sleetAccumulationLweMin sleetAccumulationMax:(double)sleetAccumulationMax sleetAccumulationMin:(double)sleetAccumulationMin sleetIntensityAvg:(double)sleetIntensityAvg sleetIntensityMax:(double)sleetIntensityMax sleetIntensityMin:(double)sleetIntensityMin snowAccumulationAvg:(double)snowAccumulationAvg snowAccumulationLweAvg:(double)snowAccumulationLweAvg snowAccumulationLweMax:(double)snowAccumulationLweMax snowAccumulationLweMin:(double)snowAccumulationLweMin snowAccumulationMax:(double)snowAccumulationMax snowAccumulationMin:(double)snowAccumulationMin snowAccumulationSum:(double)snowAccumulationSum snowDepthAvg:(SharedDouble * _Nullable)snowDepthAvg snowDepthMax:(SharedDouble * _Nullable)snowDepthMax snowDepthMin:(SharedDouble * _Nullable)snowDepthMin snowDepthSum:(SharedDouble * _Nullable)snowDepthSum snowIntensityAvg:(double)snowIntensityAvg snowIntensityMax:(double)snowIntensityMax snowIntensityMin:(double)snowIntensityMin sunriseTime:(SharedKotlinx_datetimeInstant * _Nullable)sunriseTime sunsetTime:(SharedKotlinx_datetimeInstant * _Nullable)sunsetTime temperatureApparentAvg:(double)temperatureApparentAvg temperatureApparentMax:(double)temperatureApparentMax temperatureApparentMin:(double)temperatureApparentMin temperatureAvg:(double)temperatureAvg temperatureMax:(double)temperatureMax temperatureMin:(double)temperatureMin uvHealthConcernAvg:(SharedInt * _Nullable)uvHealthConcernAvg uvHealthConcernMax:(SharedInt * _Nullable)uvHealthConcernMax uvHealthConcernMin:(SharedInt * _Nullable)uvHealthConcernMin uvIndexAvg:(SharedInt * _Nullable)uvIndexAvg uvIndexMax:(SharedInt * _Nullable)uvIndexMax uvIndexMin:(SharedInt * _Nullable)uvIndexMin visibilityAvg:(double)visibilityAvg visibilityMax:(double)visibilityMax visibilityMin:(double)visibilityMin weatherCodeMaxValue:(int32_t)weatherCodeMaxValue weatherCodeMinValue:(int32_t)weatherCodeMinValue windDirectionAvg:(double)windDirectionAvg windGustAvg:(double)windGustAvg windGustMax:(double)windGustMax windGustMin:(double)windGustMin windSpeedAvg:(double)windSpeedAvg windSpeedMax:(double)windSpeedMax windSpeedMin:(double)windSpeedMin __attribute__((swift_name("doCopy(cloudBaseAvg:cloudBaseMax:cloudBaseMin:cloudCeilingAvg:cloudCeilingMax:cloudCeilingMin:cloudCoverAvg:cloudCoverMax:cloudCoverMin:dewPointAvg:dewPointMax:dewPointMin:evapotranspirationAvg:evapotranspirationMax:evapotranspirationMin:evapotranspirationSum:freezingRainIntensityAvg:freezingRainIntensityMax:freezingRainIntensityMin:humidityAvg:humidityMax:humidityMin:iceAccumulationAvg:iceAccumulationLweAvg:iceAccumulationLweMax:iceAccumulationLweMin:iceAccumulationMax:iceAccumulationMin:iceAccumulationSum:moonriseTime:moonsetTime:precipitationProbabilityAvg:precipitationProbabilityMax:precipitationProbabilityMin:pressureSurfaceLevelAvg:pressureSurfaceLevelMax:pressureSurfaceLevelMin:rainAccumulationAvg:rainAccumulationLweAvg:rainAccumulationLweMax:rainAccumulationLweMin:rainAccumulationMax:rainAccumulationMin:rainAccumulationSum:rainIntensityAvg:rainIntensityMax:rainIntensityMin:sleetAccumulationAvg:sleetAccumulationLweAvg:sleetAccumulationLweMax:sleetAccumulationLweMin:sleetAccumulationMax:sleetAccumulationMin:sleetIntensityAvg:sleetIntensityMax:sleetIntensityMin:snowAccumulationAvg:snowAccumulationLweAvg:snowAccumulationLweMax:snowAccumulationLweMin:snowAccumulationMax:snowAccumulationMin:snowAccumulationSum:snowDepthAvg:snowDepthMax:snowDepthMin:snowDepthSum:snowIntensityAvg:snowIntensityMax:snowIntensityMin:sunriseTime:sunsetTime:temperatureApparentAvg:temperatureApparentMax:temperatureApparentMin:temperatureAvg:temperatureMax:temperatureMin:uvHealthConcernAvg:uvHealthConcernMax:uvHealthConcernMin:uvIndexAvg:uvIndexMax:uvIndexMin:visibilityAvg:visibilityMax:visibilityMin:weatherCodeMaxValue:weatherCodeMinValue:windDirectionAvg:windGustAvg:windGustMax:windGustMin:windSpeedAvg:windSpeedMax:windSpeedMin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double cloudBaseAvg __attribute__((swift_name("cloudBaseAvg")));
@property (readonly) double cloudBaseMax __attribute__((swift_name("cloudBaseMax")));
@property (readonly) double cloudBaseMin __attribute__((swift_name("cloudBaseMin")));
@property (readonly) double cloudCeilingAvg __attribute__((swift_name("cloudCeilingAvg")));
@property (readonly) double cloudCeilingMax __attribute__((swift_name("cloudCeilingMax")));
@property (readonly) double cloudCeilingMin __attribute__((swift_name("cloudCeilingMin")));
@property (readonly) double cloudCoverAvg __attribute__((swift_name("cloudCoverAvg")));
@property (readonly) double cloudCoverMax __attribute__((swift_name("cloudCoverMax")));
@property (readonly) double cloudCoverMin __attribute__((swift_name("cloudCoverMin")));
@property (readonly) double dewPointAvg __attribute__((swift_name("dewPointAvg")));
@property (readonly) double dewPointMax __attribute__((swift_name("dewPointMax")));
@property (readonly) double dewPointMin __attribute__((swift_name("dewPointMin")));
@property (readonly) double evapotranspirationAvg __attribute__((swift_name("evapotranspirationAvg")));
@property (readonly) double evapotranspirationMax __attribute__((swift_name("evapotranspirationMax")));
@property (readonly) double evapotranspirationMin __attribute__((swift_name("evapotranspirationMin")));
@property (readonly) double evapotranspirationSum __attribute__((swift_name("evapotranspirationSum")));
@property (readonly) double freezingRainIntensityAvg __attribute__((swift_name("freezingRainIntensityAvg")));
@property (readonly) double freezingRainIntensityMax __attribute__((swift_name("freezingRainIntensityMax")));
@property (readonly) double freezingRainIntensityMin __attribute__((swift_name("freezingRainIntensityMin")));
@property (readonly) double humidityAvg __attribute__((swift_name("humidityAvg")));
@property (readonly) double humidityMax __attribute__((swift_name("humidityMax")));
@property (readonly) double humidityMin __attribute__((swift_name("humidityMin")));
@property (readonly) double iceAccumulationAvg __attribute__((swift_name("iceAccumulationAvg")));
@property (readonly) double iceAccumulationLweAvg __attribute__((swift_name("iceAccumulationLweAvg")));
@property (readonly) double iceAccumulationLweMax __attribute__((swift_name("iceAccumulationLweMax")));
@property (readonly) double iceAccumulationLweMin __attribute__((swift_name("iceAccumulationLweMin")));
@property (readonly) double iceAccumulationMax __attribute__((swift_name("iceAccumulationMax")));
@property (readonly) double iceAccumulationMin __attribute__((swift_name("iceAccumulationMin")));
@property (readonly) double iceAccumulationSum __attribute__((swift_name("iceAccumulationSum")));
@property (readonly) SharedKotlinx_datetimeInstant * _Nullable moonriseTime __attribute__((swift_name("moonriseTime")));
@property (readonly) SharedKotlinx_datetimeInstant * _Nullable moonsetTime __attribute__((swift_name("moonsetTime")));
@property (readonly) double precipitationProbabilityAvg __attribute__((swift_name("precipitationProbabilityAvg")));
@property (readonly) double precipitationProbabilityMax __attribute__((swift_name("precipitationProbabilityMax")));
@property (readonly) double precipitationProbabilityMin __attribute__((swift_name("precipitationProbabilityMin")));
@property (readonly) double pressureSurfaceLevelAvg __attribute__((swift_name("pressureSurfaceLevelAvg")));
@property (readonly) double pressureSurfaceLevelMax __attribute__((swift_name("pressureSurfaceLevelMax")));
@property (readonly) double pressureSurfaceLevelMin __attribute__((swift_name("pressureSurfaceLevelMin")));
@property (readonly) double rainAccumulationAvg __attribute__((swift_name("rainAccumulationAvg")));
@property (readonly) double rainAccumulationLweAvg __attribute__((swift_name("rainAccumulationLweAvg")));
@property (readonly) double rainAccumulationLweMax __attribute__((swift_name("rainAccumulationLweMax")));
@property (readonly) double rainAccumulationLweMin __attribute__((swift_name("rainAccumulationLweMin")));
@property (readonly) double rainAccumulationMax __attribute__((swift_name("rainAccumulationMax")));
@property (readonly) double rainAccumulationMin __attribute__((swift_name("rainAccumulationMin")));
@property (readonly) double rainAccumulationSum __attribute__((swift_name("rainAccumulationSum")));
@property (readonly) double rainIntensityAvg __attribute__((swift_name("rainIntensityAvg")));
@property (readonly) double rainIntensityMax __attribute__((swift_name("rainIntensityMax")));
@property (readonly) double rainIntensityMin __attribute__((swift_name("rainIntensityMin")));
@property (readonly) double sleetAccumulationAvg __attribute__((swift_name("sleetAccumulationAvg")));
@property (readonly) double sleetAccumulationLweAvg __attribute__((swift_name("sleetAccumulationLweAvg")));
@property (readonly) double sleetAccumulationLweMax __attribute__((swift_name("sleetAccumulationLweMax")));
@property (readonly) double sleetAccumulationLweMin __attribute__((swift_name("sleetAccumulationLweMin")));
@property (readonly) double sleetAccumulationMax __attribute__((swift_name("sleetAccumulationMax")));
@property (readonly) double sleetAccumulationMin __attribute__((swift_name("sleetAccumulationMin")));
@property (readonly) double sleetIntensityAvg __attribute__((swift_name("sleetIntensityAvg")));
@property (readonly) double sleetIntensityMax __attribute__((swift_name("sleetIntensityMax")));
@property (readonly) double sleetIntensityMin __attribute__((swift_name("sleetIntensityMin")));
@property (readonly) double snowAccumulationAvg __attribute__((swift_name("snowAccumulationAvg")));
@property (readonly) double snowAccumulationLweAvg __attribute__((swift_name("snowAccumulationLweAvg")));
@property (readonly) double snowAccumulationLweMax __attribute__((swift_name("snowAccumulationLweMax")));
@property (readonly) double snowAccumulationLweMin __attribute__((swift_name("snowAccumulationLweMin")));
@property (readonly) double snowAccumulationMax __attribute__((swift_name("snowAccumulationMax")));
@property (readonly) double snowAccumulationMin __attribute__((swift_name("snowAccumulationMin")));
@property (readonly) double snowAccumulationSum __attribute__((swift_name("snowAccumulationSum")));
@property (readonly) SharedDouble * _Nullable snowDepthAvg __attribute__((swift_name("snowDepthAvg")));
@property (readonly) SharedDouble * _Nullable snowDepthMax __attribute__((swift_name("snowDepthMax")));
@property (readonly) SharedDouble * _Nullable snowDepthMin __attribute__((swift_name("snowDepthMin")));
@property (readonly) SharedDouble * _Nullable snowDepthSum __attribute__((swift_name("snowDepthSum")));
@property (readonly) double snowIntensityAvg __attribute__((swift_name("snowIntensityAvg")));
@property (readonly) double snowIntensityMax __attribute__((swift_name("snowIntensityMax")));
@property (readonly) double snowIntensityMin __attribute__((swift_name("snowIntensityMin")));
@property (readonly) SharedKotlinx_datetimeInstant * _Nullable sunriseTime __attribute__((swift_name("sunriseTime")));
@property (readonly) SharedKotlinx_datetimeInstant * _Nullable sunsetTime __attribute__((swift_name("sunsetTime")));
@property (readonly) double temperatureApparentAvg __attribute__((swift_name("temperatureApparentAvg")));
@property (readonly) double temperatureApparentMax __attribute__((swift_name("temperatureApparentMax")));
@property (readonly) double temperatureApparentMin __attribute__((swift_name("temperatureApparentMin")));
@property (readonly) double temperatureAvg __attribute__((swift_name("temperatureAvg")));
@property (readonly) double temperatureMax __attribute__((swift_name("temperatureMax")));
@property (readonly) double temperatureMin __attribute__((swift_name("temperatureMin")));
@property (readonly) SharedInt * _Nullable uvHealthConcernAvg __attribute__((swift_name("uvHealthConcernAvg")));
@property (readonly) SharedInt * _Nullable uvHealthConcernMax __attribute__((swift_name("uvHealthConcernMax")));
@property (readonly) SharedInt * _Nullable uvHealthConcernMin __attribute__((swift_name("uvHealthConcernMin")));
@property (readonly) SharedInt * _Nullable uvIndexAvg __attribute__((swift_name("uvIndexAvg")));
@property (readonly) SharedInt * _Nullable uvIndexMax __attribute__((swift_name("uvIndexMax")));
@property (readonly) SharedInt * _Nullable uvIndexMin __attribute__((swift_name("uvIndexMin")));
@property (readonly) double visibilityAvg __attribute__((swift_name("visibilityAvg")));
@property (readonly) double visibilityMax __attribute__((swift_name("visibilityMax")));
@property (readonly) double visibilityMin __attribute__((swift_name("visibilityMin")));
@property (readonly) SharedWeatherCode * _Nullable weatherMax __attribute__((swift_name("weatherMax")));
@property (readonly) SharedWeatherCode * _Nullable weatherMin __attribute__((swift_name("weatherMin")));
@property (readonly) double windDirectionAvg __attribute__((swift_name("windDirectionAvg")));
@property (readonly) double windGustAvg __attribute__((swift_name("windGustAvg")));
@property (readonly) double windGustMax __attribute__((swift_name("windGustMax")));
@property (readonly) double windGustMin __attribute__((swift_name("windGustMin")));
@property (readonly) double windSpeedAvg __attribute__((swift_name("windSpeedAvg")));
@property (readonly) double windSpeedMax __attribute__((swift_name("windSpeedMax")));
@property (readonly) double windSpeedMin __attribute__((swift_name("windSpeedMin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesDaily.Companion")))
@interface SharedDataValuesDailyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDataValuesDailyCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesHourly")))
@interface SharedDataValuesHourly : SharedBase
- (instancetype)initWithCloudBase:(SharedDouble * _Nullable)cloudBase cloudCeiling:(SharedDouble * _Nullable)cloudCeiling cloudCover:(SharedDouble * _Nullable)cloudCover dewPoint:(double)dewPoint evapotranspiration:(double)evapotranspiration freezingRainIntensity:(double)freezingRainIntensity humidity:(double)humidity iceAccumulation:(double)iceAccumulation iceAccumulationLwe:(SharedDouble * _Nullable)iceAccumulationLwe precipitationProbability:(double)precipitationProbability pressureSurfaceLevel:(double)pressureSurfaceLevel rainAccumulation:(double)rainAccumulation rainAccumulationLwe:(SharedDouble * _Nullable)rainAccumulationLwe rainIntensity:(double)rainIntensity sleetAccumulation:(double)sleetAccumulation sleetAccumulationLwe:(SharedDouble * _Nullable)sleetAccumulationLwe sleetIntensity:(double)sleetIntensity snowAccumulation:(double)snowAccumulation snowAccumulationLwe:(SharedDouble * _Nullable)snowAccumulationLwe snowDepth:(SharedDouble * _Nullable)snowDepth snowIntensity:(SharedDouble * _Nullable)snowIntensity temperature:(double)temperature temperatureApparent:(double)temperatureApparent uvHealthConcern:(SharedInt * _Nullable)uvHealthConcern uvIndex:(SharedInt * _Nullable)uvIndex visibility:(double)visibility weatherCodeValue:(int32_t)weatherCodeValue windDirection:(double)windDirection windGust:(double)windGust windSpeed:(double)windSpeed __attribute__((swift_name("init(cloudBase:cloudCeiling:cloudCover:dewPoint:evapotranspiration:freezingRainIntensity:humidity:iceAccumulation:iceAccumulationLwe:precipitationProbability:pressureSurfaceLevel:rainAccumulation:rainAccumulationLwe:rainIntensity:sleetAccumulation:sleetAccumulationLwe:sleetIntensity:snowAccumulation:snowAccumulationLwe:snowDepth:snowIntensity:temperature:temperatureApparent:uvHealthConcern:uvIndex:visibility:weatherCodeValue:windDirection:windGust:windSpeed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDataValuesHourlyCompanion *companion __attribute__((swift_name("companion")));
- (SharedDataValuesHourly *)doCopyCloudBase:(SharedDouble * _Nullable)cloudBase cloudCeiling:(SharedDouble * _Nullable)cloudCeiling cloudCover:(SharedDouble * _Nullable)cloudCover dewPoint:(double)dewPoint evapotranspiration:(double)evapotranspiration freezingRainIntensity:(double)freezingRainIntensity humidity:(double)humidity iceAccumulation:(double)iceAccumulation iceAccumulationLwe:(SharedDouble * _Nullable)iceAccumulationLwe precipitationProbability:(double)precipitationProbability pressureSurfaceLevel:(double)pressureSurfaceLevel rainAccumulation:(double)rainAccumulation rainAccumulationLwe:(SharedDouble * _Nullable)rainAccumulationLwe rainIntensity:(double)rainIntensity sleetAccumulation:(double)sleetAccumulation sleetAccumulationLwe:(SharedDouble * _Nullable)sleetAccumulationLwe sleetIntensity:(double)sleetIntensity snowAccumulation:(double)snowAccumulation snowAccumulationLwe:(SharedDouble * _Nullable)snowAccumulationLwe snowDepth:(SharedDouble * _Nullable)snowDepth snowIntensity:(SharedDouble * _Nullable)snowIntensity temperature:(double)temperature temperatureApparent:(double)temperatureApparent uvHealthConcern:(SharedInt * _Nullable)uvHealthConcern uvIndex:(SharedInt * _Nullable)uvIndex visibility:(double)visibility weatherCodeValue:(int32_t)weatherCodeValue windDirection:(double)windDirection windGust:(double)windGust windSpeed:(double)windSpeed __attribute__((swift_name("doCopy(cloudBase:cloudCeiling:cloudCover:dewPoint:evapotranspiration:freezingRainIntensity:humidity:iceAccumulation:iceAccumulationLwe:precipitationProbability:pressureSurfaceLevel:rainAccumulation:rainAccumulationLwe:rainIntensity:sleetAccumulation:sleetAccumulationLwe:sleetIntensity:snowAccumulation:snowAccumulationLwe:snowDepth:snowIntensity:temperature:temperatureApparent:uvHealthConcern:uvIndex:visibility:weatherCodeValue:windDirection:windGust:windSpeed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable cloudBase __attribute__((swift_name("cloudBase")));
@property (readonly) SharedDouble * _Nullable cloudCeiling __attribute__((swift_name("cloudCeiling")));
@property (readonly) SharedDouble * _Nullable cloudCover __attribute__((swift_name("cloudCover")));
@property (readonly) double dewPoint __attribute__((swift_name("dewPoint")));
@property (readonly) double evapotranspiration __attribute__((swift_name("evapotranspiration")));
@property (readonly) double freezingRainIntensity __attribute__((swift_name("freezingRainIntensity")));
@property (readonly) double humidity __attribute__((swift_name("humidity")));
@property (readonly) double iceAccumulation __attribute__((swift_name("iceAccumulation")));
@property (readonly) SharedDouble * _Nullable iceAccumulationLwe __attribute__((swift_name("iceAccumulationLwe")));
@property (readonly) double precipitationProbability __attribute__((swift_name("precipitationProbability")));
@property (readonly) double pressureSurfaceLevel __attribute__((swift_name("pressureSurfaceLevel")));
@property (readonly) double rainAccumulation __attribute__((swift_name("rainAccumulation")));
@property (readonly) SharedDouble * _Nullable rainAccumulationLwe __attribute__((swift_name("rainAccumulationLwe")));
@property (readonly) double rainIntensity __attribute__((swift_name("rainIntensity")));
@property (readonly) double sleetAccumulation __attribute__((swift_name("sleetAccumulation")));
@property (readonly) SharedDouble * _Nullable sleetAccumulationLwe __attribute__((swift_name("sleetAccumulationLwe")));
@property (readonly) double sleetIntensity __attribute__((swift_name("sleetIntensity")));
@property (readonly) double snowAccumulation __attribute__((swift_name("snowAccumulation")));
@property (readonly) SharedDouble * _Nullable snowAccumulationLwe __attribute__((swift_name("snowAccumulationLwe")));
@property (readonly) SharedDouble * _Nullable snowDepth __attribute__((swift_name("snowDepth")));
@property (readonly) SharedDouble * _Nullable snowIntensity __attribute__((swift_name("snowIntensity")));
@property (readonly) double temperature __attribute__((swift_name("temperature")));
@property (readonly) double temperatureApparent __attribute__((swift_name("temperatureApparent")));
@property (readonly) SharedInt * _Nullable uvHealthConcern __attribute__((swift_name("uvHealthConcern")));
@property (readonly) SharedInt * _Nullable uvIndex __attribute__((swift_name("uvIndex")));
@property (readonly) double visibility __attribute__((swift_name("visibility")));
@property (readonly) SharedWeatherCode * _Nullable weather __attribute__((swift_name("weather")));
@property (readonly) double windDirection __attribute__((swift_name("windDirection")));
@property (readonly) double windGust __attribute__((swift_name("windGust")));
@property (readonly) double windSpeed __attribute__((swift_name("windSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesHourly.Companion")))
@interface SharedDataValuesHourlyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDataValuesHourlyCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesMinutely")))
@interface SharedDataValuesMinutely : SharedBase
- (instancetype)initWithCloudBase:(SharedDouble * _Nullable)cloudBase cloudCeiling:(SharedDouble * _Nullable)cloudCeiling cloudCover:(double)cloudCover dewPoint:(double)dewPoint freezingRainIntensity:(double)freezingRainIntensity humidity:(double)humidity precipitationProbability:(double)precipitationProbability pressureSurfaceLevel:(double)pressureSurfaceLevel rainIntensity:(double)rainIntensity sleetIntensity:(double)sleetIntensity snowIntensity:(double)snowIntensity temperature:(double)temperature temperatureApparent:(double)temperatureApparent uvHealthConcern:(SharedInt * _Nullable)uvHealthConcern uvIndex:(SharedInt * _Nullable)uvIndex visibility:(double)visibility weatherCodeValue:(int32_t)weatherCodeValue windDirection:(double)windDirection windGust:(double)windGust windSpeed:(double)windSpeed __attribute__((swift_name("init(cloudBase:cloudCeiling:cloudCover:dewPoint:freezingRainIntensity:humidity:precipitationProbability:pressureSurfaceLevel:rainIntensity:sleetIntensity:snowIntensity:temperature:temperatureApparent:uvHealthConcern:uvIndex:visibility:weatherCodeValue:windDirection:windGust:windSpeed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDataValuesMinutelyCompanion *companion __attribute__((swift_name("companion")));
- (SharedDataValuesMinutely *)doCopyCloudBase:(SharedDouble * _Nullable)cloudBase cloudCeiling:(SharedDouble * _Nullable)cloudCeiling cloudCover:(double)cloudCover dewPoint:(double)dewPoint freezingRainIntensity:(double)freezingRainIntensity humidity:(double)humidity precipitationProbability:(double)precipitationProbability pressureSurfaceLevel:(double)pressureSurfaceLevel rainIntensity:(double)rainIntensity sleetIntensity:(double)sleetIntensity snowIntensity:(double)snowIntensity temperature:(double)temperature temperatureApparent:(double)temperatureApparent uvHealthConcern:(SharedInt * _Nullable)uvHealthConcern uvIndex:(SharedInt * _Nullable)uvIndex visibility:(double)visibility weatherCodeValue:(int32_t)weatherCodeValue windDirection:(double)windDirection windGust:(double)windGust windSpeed:(double)windSpeed __attribute__((swift_name("doCopy(cloudBase:cloudCeiling:cloudCover:dewPoint:freezingRainIntensity:humidity:precipitationProbability:pressureSurfaceLevel:rainIntensity:sleetIntensity:snowIntensity:temperature:temperatureApparent:uvHealthConcern:uvIndex:visibility:weatherCodeValue:windDirection:windGust:windSpeed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable cloudBase __attribute__((swift_name("cloudBase")));
@property (readonly) SharedDouble * _Nullable cloudCeiling __attribute__((swift_name("cloudCeiling")));
@property (readonly) double cloudCover __attribute__((swift_name("cloudCover")));
@property (readonly) double dewPoint __attribute__((swift_name("dewPoint")));
@property (readonly) double freezingRainIntensity __attribute__((swift_name("freezingRainIntensity")));
@property (readonly) double humidity __attribute__((swift_name("humidity")));
@property (readonly) double precipitationProbability __attribute__((swift_name("precipitationProbability")));
@property (readonly) double pressureSurfaceLevel __attribute__((swift_name("pressureSurfaceLevel")));
@property (readonly) double rainIntensity __attribute__((swift_name("rainIntensity")));
@property (readonly) double sleetIntensity __attribute__((swift_name("sleetIntensity")));
@property (readonly) double snowIntensity __attribute__((swift_name("snowIntensity")));
@property (readonly) double temperature __attribute__((swift_name("temperature")));
@property (readonly) double temperatureApparent __attribute__((swift_name("temperatureApparent")));
@property (readonly) SharedInt * _Nullable uvHealthConcern __attribute__((swift_name("uvHealthConcern")));
@property (readonly) SharedInt * _Nullable uvIndex __attribute__((swift_name("uvIndex")));
@property (readonly) double visibility __attribute__((swift_name("visibility")));
@property (readonly) SharedWeatherCode * _Nullable weather __attribute__((swift_name("weather")));
@property (readonly) double windDirection __attribute__((swift_name("windDirection")));
@property (readonly) double windGust __attribute__((swift_name("windGust")));
@property (readonly) double windSpeed __attribute__((swift_name("windSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValuesMinutely.Companion")))
@interface SharedDataValuesMinutelyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDataValuesMinutelyCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface SharedError : SharedKotlinEnum<SharedError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedError *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedError *noInternetOrOther __attribute__((swift_name("noInternetOrOther")));
@property (class, readonly) SharedError *invalidBodyParameters __attribute__((swift_name("invalidBodyParameters")));
@property (class, readonly) SharedError *invalidQueryParameters __attribute__((swift_name("invalidQueryParameters")));
@property (class, readonly) SharedError *missingRequiredBodyParameters __attribute__((swift_name("missingRequiredBodyParameters")));
@property (class, readonly) SharedError *missingRequiredQueryParameters __attribute__((swift_name("missingRequiredQueryParameters")));
@property (class, readonly) SharedError *ruleViolation __attribute__((swift_name("ruleViolation")));
@property (class, readonly) SharedError *missingRequiredHeaderParameters __attribute__((swift_name("missingRequiredHeaderParameters")));
@property (class, readonly) SharedError *invalidPathParameters __attribute__((swift_name("invalidPathParameters")));
@property (class, readonly) SharedError *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) SharedError *tooManyRequests __attribute__((swift_name("tooManyRequests")));
@property (class, readonly) SharedError *accessDenied __attribute__((swift_name("accessDenied")));
@property (class, readonly) SharedError *accountLimit __attribute__((swift_name("accountLimit")));
@property (class, readonly) SharedError *forbiddenAction __attribute__((swift_name("forbiddenAction")));
@property (class, readonly) SharedError *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) SharedError *unexpected __attribute__((swift_name("unexpected")));
@property (class, readonly) SharedError *unavailable __attribute__((swift_name("unavailable")));
+ (SharedKotlinArray<SharedError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error.Companion")))
@interface SharedErrorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedErrorCompanion *shared __attribute__((swift_name("shared")));
- (SharedError *)findByValueValue:(int32_t)value __attribute__((swift_name("findByValue(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoricalWeather")))
@interface SharedHistoricalWeather : SharedBase
- (instancetype)initWithLocation:(SharedLocation *)location timelines:(SharedHistoricalWeatherTimeline *)timelines __attribute__((swift_name("init(location:timelines:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedHistoricalWeatherCompanion *companion __attribute__((swift_name("companion")));
- (SharedHistoricalWeather *)doCopyLocation:(SharedLocation *)location timelines:(SharedHistoricalWeatherTimeline *)timelines __attribute__((swift_name("doCopy(location:timelines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLocation *location __attribute__((swift_name("location")));
@property (readonly) SharedHistoricalWeatherTimeline *timelines __attribute__((swift_name("timelines")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoricalWeather.Companion")))
@interface SharedHistoricalWeatherCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedHistoricalWeatherCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoricalWeatherTimeline")))
@interface SharedHistoricalWeatherTimeline : SharedBase
- (instancetype)initWithHourly:(NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *)hourly daily:(NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *)daily __attribute__((swift_name("init(hourly:daily:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedHistoricalWeatherTimelineCompanion *companion __attribute__((swift_name("companion")));
- (SharedHistoricalWeatherTimeline *)doCopyHourly:(NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *)hourly daily:(NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *)daily __attribute__((swift_name("doCopy(hourly:daily:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *daily __attribute__((swift_name("daily")));
@property (readonly) NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *hourly __attribute__((swift_name("hourly")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoricalWeatherTimeline.Companion")))
@interface SharedHistoricalWeatherTimelineCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedHistoricalWeatherTimelineCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface SharedLocation : SharedBase
- (instancetype)initWithLat:(SharedDouble * _Nullable)lat lon:(SharedDouble * _Nullable)lon name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("init(lat:lon:name:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLocationCompanion *companion __attribute__((swift_name("companion")));
- (SharedLocation *)doCopyLat:(SharedDouble * _Nullable)lat lon:(SharedDouble * _Nullable)lon name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(lat:lon:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) SharedDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface SharedLocationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealtimeWeather")))
@interface SharedRealtimeWeather : SharedBase
- (instancetype)initWithLocation:(SharedLocation *)location data:(SharedTimelineItem<SharedDataValuesMinutely *> *)data __attribute__((swift_name("init(location:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRealtimeWeatherCompanion *companion __attribute__((swift_name("companion")));
- (SharedRealtimeWeather *)doCopyLocation:(SharedLocation *)location data:(SharedTimelineItem<SharedDataValuesMinutely *> *)data __attribute__((swift_name("doCopy(location:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTimelineItem<SharedDataValuesMinutely *> *data __attribute__((swift_name("data")));
@property (readonly) SharedLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealtimeWeather.Companion")))
@interface SharedRealtimeWeatherCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRealtimeWeatherCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineItem")))
@interface SharedTimelineItem<__covariant E> : SharedBase
- (instancetype)initWithTime:(SharedKotlinx_datetimeInstant *)time values:(E _Nullable)values __attribute__((swift_name("init(time:values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTimelineItemCompanion *companion __attribute__((swift_name("companion")));
- (SharedTimelineItem<E> *)doCopyTime:(SharedKotlinx_datetimeInstant *)time values:(E _Nullable)values __attribute__((swift_name("doCopy(time:values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_datetimeInstant *time __attribute__((swift_name("time")));
@property (readonly) E _Nullable values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineItemCompanion")))
@interface SharedTimelineItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTimelineItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<SharedKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherCode")))
@interface SharedWeatherCode : SharedKotlinEnum<SharedWeatherCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWeatherCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedWeatherCode *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedWeatherCode *clearFullDay __attribute__((swift_name("clearFullDay")));
@property (class, readonly) SharedWeatherCode *clearDay __attribute__((swift_name("clearDay")));
@property (class, readonly) SharedWeatherCode *clearNight __attribute__((swift_name("clearNight")));
@property (class, readonly) SharedWeatherCode *mostlyClearFullDay __attribute__((swift_name("mostlyClearFullDay")));
@property (class, readonly) SharedWeatherCode *mostlyClearDay __attribute__((swift_name("mostlyClearDay")));
@property (class, readonly) SharedWeatherCode *mostlyClearNight __attribute__((swift_name("mostlyClearNight")));
@property (class, readonly) SharedWeatherCode *partlyCloudyFullDay __attribute__((swift_name("partlyCloudyFullDay")));
@property (class, readonly) SharedWeatherCode *partlyCloudyDay __attribute__((swift_name("partlyCloudyDay")));
@property (class, readonly) SharedWeatherCode *partlyCloudyNight __attribute__((swift_name("partlyCloudyNight")));
@property (class, readonly) SharedWeatherCode *mostlyCloudyFullDay __attribute__((swift_name("mostlyCloudyFullDay")));
@property (class, readonly) SharedWeatherCode *mostlyCloudyDay __attribute__((swift_name("mostlyCloudyDay")));
@property (class, readonly) SharedWeatherCode *mostlyCloudyNight __attribute__((swift_name("mostlyCloudyNight")));
@property (class, readonly) SharedWeatherCode *cloudyFullDay __attribute__((swift_name("cloudyFullDay")));
@property (class, readonly) SharedWeatherCode *cloudyDay __attribute__((swift_name("cloudyDay")));
@property (class, readonly) SharedWeatherCode *cloudyNight __attribute__((swift_name("cloudyNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndMostlyClearFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndMostlyClearFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndMostlyClearDay __attribute__((swift_name("mixedConditionPartlyCloudyAndMostlyClearDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndMostlyClearNight __attribute__((swift_name("mixedConditionPartlyCloudyAndMostlyClearNight")));
@property (class, readonly) SharedWeatherCode *lightFogFullDay __attribute__((swift_name("lightFogFullDay")));
@property (class, readonly) SharedWeatherCode *lightFogDay __attribute__((swift_name("lightFogDay")));
@property (class, readonly) SharedWeatherCode *lightFogNight __attribute__((swift_name("lightFogNight")));
@property (class, readonly) SharedWeatherCode *fogFullDay __attribute__((swift_name("fogFullDay")));
@property (class, readonly) SharedWeatherCode *fogDay __attribute__((swift_name("fogDay")));
@property (class, readonly) SharedWeatherCode *fogNight __attribute__((swift_name("fogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFogFullDay __attribute__((swift_name("mixedConditionMostlyClearAndLightFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFogDay __attribute__((swift_name("mixedConditionMostlyClearAndLightFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFogNight __attribute__((swift_name("mixedConditionMostlyClearAndLightFogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFogFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFogDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFogNight __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFogFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFogDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFogNight __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFogFullDay __attribute__((swift_name("mixedConditionMostlyClearAndFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFogDay __attribute__((swift_name("mixedConditionMostlyClearAndFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFogNight __attribute__((swift_name("mixedConditionMostlyClearAndFogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFogFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFogDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFogNight __attribute__((swift_name("mixedConditionPartlyCloudyAndFogNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFogFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFogFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFogDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFogDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFogNight __attribute__((swift_name("mixedConditionMostlyCloudyAndFogNight")));
@property (class, readonly) SharedWeatherCode *drizzleFullDay __attribute__((swift_name("drizzleFullDay")));
@property (class, readonly) SharedWeatherCode *drizzleDay __attribute__((swift_name("drizzleDay")));
@property (class, readonly) SharedWeatherCode *drizzleNight __attribute__((swift_name("drizzleNight")));
@property (class, readonly) SharedWeatherCode *lightRainFullDay __attribute__((swift_name("lightRainFullDay")));
@property (class, readonly) SharedWeatherCode *lightRainDay __attribute__((swift_name("lightRainDay")));
@property (class, readonly) SharedWeatherCode *lightRainNight __attribute__((swift_name("lightRainNight")));
@property (class, readonly) SharedWeatherCode *rainFullDay __attribute__((swift_name("rainFullDay")));
@property (class, readonly) SharedWeatherCode *rainDay __attribute__((swift_name("rainDay")));
@property (class, readonly) SharedWeatherCode *rainNight __attribute__((swift_name("rainNight")));
@property (class, readonly) SharedWeatherCode *heavyRainFullDay __attribute__((swift_name("heavyRainFullDay")));
@property (class, readonly) SharedWeatherCode *heavyRainDay __attribute__((swift_name("heavyRainDay")));
@property (class, readonly) SharedWeatherCode *heavyRainNight __attribute__((swift_name("heavyRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndDrizzleFullDay __attribute__((swift_name("mixedConditionMostlyClearAndDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndDrizzleDay __attribute__((swift_name("mixedConditionMostlyClearAndDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndDrizzleNight __attribute__((swift_name("mixedConditionMostlyClearAndDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndDrizzleFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndDrizzleDay __attribute__((swift_name("mixedConditionPartlyCloudyAndDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndDrizzleNight __attribute__((swift_name("mixedConditionPartlyCloudyAndDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndDrizzleFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndDrizzleDay __attribute__((swift_name("mixedConditionMostlyCloudyAndDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndDrizzleNight __attribute__((swift_name("mixedConditionMostlyCloudyAndDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndLightRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightRainDay __attribute__((swift_name("mixedConditionMostlyClearAndLightRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightRainNight __attribute__((swift_name("mixedConditionMostlyClearAndLightRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndLightRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndLightRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndRainDay __attribute__((swift_name("mixedConditionMostlyClearAndRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndRainNight __attribute__((swift_name("mixedConditionMostlyClearAndRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyRainDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyRainNight __attribute__((swift_name("mixedConditionMostlyClearAndHeavyRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyRainNight")));
@property (class, readonly) SharedWeatherCode *flurriesFullDay __attribute__((swift_name("flurriesFullDay")));
@property (class, readonly) SharedWeatherCode *flurriesDay __attribute__((swift_name("flurriesDay")));
@property (class, readonly) SharedWeatherCode *flurriesNight __attribute__((swift_name("flurriesNight")));
@property (class, readonly) SharedWeatherCode *lightSnowFullDay __attribute__((swift_name("lightSnowFullDay")));
@property (class, readonly) SharedWeatherCode *lightSnowDay __attribute__((swift_name("lightSnowDay")));
@property (class, readonly) SharedWeatherCode *lightSnowNight __attribute__((swift_name("lightSnowNight")));
@property (class, readonly) SharedWeatherCode *snowFullDay __attribute__((swift_name("snowFullDay")));
@property (class, readonly) SharedWeatherCode *snowDay __attribute__((swift_name("snowDay")));
@property (class, readonly) SharedWeatherCode *snowNight __attribute__((swift_name("snowNight")));
@property (class, readonly) SharedWeatherCode *heavySnowFullDay __attribute__((swift_name("heavySnowFullDay")));
@property (class, readonly) SharedWeatherCode *heavySnowDay __attribute__((swift_name("heavySnowDay")));
@property (class, readonly) SharedWeatherCode *heavySnowNight __attribute__((swift_name("heavySnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFlurriesFullDay __attribute__((swift_name("mixedConditionMostlyClearAndFlurriesFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFlurriesDay __attribute__((swift_name("mixedConditionMostlyClearAndFlurriesDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFlurriesNight __attribute__((swift_name("mixedConditionMostlyClearAndFlurriesNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFlurriesFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFlurriesFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFlurriesDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFlurriesDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFlurriesNight __attribute__((swift_name("mixedConditionPartlyCloudyAndFlurriesNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFlurriesFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFlurriesFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFlurriesDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFlurriesDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFlurriesNight __attribute__((swift_name("mixedConditionMostlyCloudyAndFlurriesNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndLightSnowFullDay __attribute__((swift_name("mixedConditionDrizzleAndLightSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndLightSnowDay __attribute__((swift_name("mixedConditionDrizzleAndLightSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndLightSnowNight __attribute__((swift_name("mixedConditionDrizzleAndLightSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightSnowFullDay __attribute__((swift_name("mixedConditionMostlyClearAndLightSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightSnowDay __attribute__((swift_name("mixedConditionMostlyClearAndLightSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightSnowNight __attribute__((swift_name("mixedConditionMostlyClearAndLightSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightSnowFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightSnowDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightSnowNight __attribute__((swift_name("mixedConditionPartlyCloudyAndLightSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightSnowFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightSnowDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightSnowNight __attribute__((swift_name("mixedConditionMostlyCloudyAndLightSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndSnowFullDay __attribute__((swift_name("mixedConditionMostlyClearAndSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndSnowDay __attribute__((swift_name("mixedConditionMostlyClearAndSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndSnowNight __attribute__((swift_name("mixedConditionMostlyClearAndSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndSnowFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndSnowDay __attribute__((swift_name("mixedConditionPartlyCloudyAndSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndSnowNight __attribute__((swift_name("mixedConditionPartlyCloudyAndSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndSnowFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndSnowDay __attribute__((swift_name("mixedConditionMostlyCloudyAndSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndSnowNight __attribute__((swift_name("mixedConditionMostlyCloudyAndSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavySnowFullDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavySnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavySnowDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavySnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavySnowNight __attribute__((swift_name("mixedConditionMostlyClearAndHeavySnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavySnowFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavySnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavySnowDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavySnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavySnowNight __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavySnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavySnowFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavySnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavySnowDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavySnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavySnowNight __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavySnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndSnowFullDay __attribute__((swift_name("mixedConditionDrizzleAndSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndSnowDay __attribute__((swift_name("mixedConditionDrizzleAndSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndSnowNight __attribute__((swift_name("mixedConditionDrizzleAndSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndSnowFullDay __attribute__((swift_name("mixedConditionRainAndSnowFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndSnowDay __attribute__((swift_name("mixedConditionRainAndSnowDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndSnowNight __attribute__((swift_name("mixedConditionRainAndSnowNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndFreezingRainFullDay __attribute__((swift_name("mixedConditionSnowAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndFreezingRainDay __attribute__((swift_name("mixedConditionSnowAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndFreezingRainNight __attribute__((swift_name("mixedConditionSnowAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndIcePelletsFullDay __attribute__((swift_name("mixedConditionSnowAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndIcePelletsRainDay __attribute__((swift_name("mixedConditionSnowAndIcePelletsRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionSnowAndIcePelletsRainNight __attribute__((swift_name("mixedConditionSnowAndIcePelletsRainNight")));
@property (class, readonly) SharedWeatherCode *freezingDrizzleFullDay __attribute__((swift_name("freezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *freezingDrizzleDay __attribute__((swift_name("freezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *freezingDrizzleNight __attribute__((swift_name("freezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *lightFreezingDrizzleFullDay __attribute__((swift_name("lightFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *lightFreezingDrizzleDay __attribute__((swift_name("lightFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *lightFreezingDrizzleNight __attribute__((swift_name("lightFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *freezingRainFullDay __attribute__((swift_name("freezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *freezingRainDay __attribute__((swift_name("freezingRainDay")));
@property (class, readonly) SharedWeatherCode *freezingRainNight __attribute__((swift_name("freezingRainNight")));
@property (class, readonly) SharedWeatherCode *heavyFreezingRainFullDay __attribute__((swift_name("heavyFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *heavyFreezingRainDay __attribute__((swift_name("heavyFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *heavyFreezingRainNight __attribute__((swift_name("heavyFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingDrizzleFullDay __attribute__((swift_name("mixedConditionMostlyClearAndFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingDrizzleDay __attribute__((swift_name("mixedConditionMostlyClearAndFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingDrizzleNight __attribute__((swift_name("mixedConditionMostlyClearAndFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingDrizzleFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingDrizzleDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingDrizzleNight __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingDrizzleFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingDrizzleDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingDrizzleNight __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingDrizzleFullDay __attribute__((swift_name("mixedConditionDrizzleAndFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingDrizzleDay __attribute__((swift_name("mixedConditionDrizzleAndFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingDrizzleNight __attribute__((swift_name("mixedConditionDrizzleAndFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingDrizzleFullDay __attribute__((swift_name("mixedConditionLightRainAndFreezingDrizzleFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingDrizzleDay __attribute__((swift_name("mixedConditionLightRainAndFreezingDrizzleDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingDrizzleNight __attribute__((swift_name("mixedConditionLightRainAndFreezingDrizzleNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndLightFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFreezingRainDay __attribute__((swift_name("mixedConditionMostlyClearAndLightFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightFreezingRainNight __attribute__((swift_name("mixedConditionMostlyClearAndLightFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFreezingRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFreezingRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightFreezingRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndLightFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFreezingRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightFreezingRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndLightFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingRainDay __attribute__((swift_name("mixedConditionMostlyClearAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndFreezingRainNight __attribute__((swift_name("mixedConditionMostlyClearAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndFreezingRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndFreezingRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingRainFullDay __attribute__((swift_name("mixedConditionDrizzleAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingRainDay __attribute__((swift_name("mixedConditionDrizzleAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndFreezingRainNight __attribute__((swift_name("mixedConditionDrizzleAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingRainFullDay __attribute__((swift_name("mixedConditionLightRainAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingRainDay __attribute__((swift_name("mixedConditionLightRainAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndFreezingRainNight __attribute__((swift_name("mixedConditionLightRainAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndFreezingRainFullDay __attribute__((swift_name("mixedConditionRainAndFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndFreezingRainDay __attribute__((swift_name("mixedConditionRainAndFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndFreezingRainNight __attribute__((swift_name("mixedConditionRainAndFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyFreezingRainDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyFreezingRainNight __attribute__((swift_name("mixedConditionMostlyClearAndHeavyFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyFreezingRainFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyFreezingRainDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyFreezingRainNight __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyFreezingRainFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyFreezingRainFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyFreezingRainDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyFreezingRainDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyFreezingRainNight __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyFreezingRainNight")));
@property (class, readonly) SharedWeatherCode *lightIcePelletsFullDay __attribute__((swift_name("lightIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *lightIcePelletsDay __attribute__((swift_name("lightIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *lightIcePelletsNight __attribute__((swift_name("lightIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *icePelletsFullDay __attribute__((swift_name("icePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *icePelletsDay __attribute__((swift_name("icePelletsDay")));
@property (class, readonly) SharedWeatherCode *icePelletsNight __attribute__((swift_name("icePelletsNight")));
@property (class, readonly) SharedWeatherCode *heavyIcePelletsFullDay __attribute__((swift_name("heavyIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *heavyIcePelletsDay __attribute__((swift_name("heavyIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *heavyIcePelletsNight __attribute__((swift_name("heavyIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyClearAndLightIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightIcePelletsDay __attribute__((swift_name("mixedConditionMostlyClearAndLightIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndLightIcePelletsNight __attribute__((swift_name("mixedConditionMostlyClearAndLightIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightIcePelletsFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightIcePelletsDay __attribute__((swift_name("mixedConditionPartlyCloudyAndLightIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndLightIcePelletsNight __attribute__((swift_name("mixedConditionPartlyCloudyAndLightIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightIcePelletsDay __attribute__((swift_name("mixedConditionMostlyCloudyAndLightIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndLightIcePelletsNight __attribute__((swift_name("mixedConditionMostlyCloudyAndLightIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyClearAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndIcePelletsDay __attribute__((swift_name("mixedConditionMostlyClearAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndIcePelletsNight __attribute__((swift_name("mixedConditionMostlyClearAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndIcePelletsFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndIcePelletsDay __attribute__((swift_name("mixedConditionPartlyCloudyAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndIcePelletsNight __attribute__((swift_name("mixedConditionPartlyCloudyAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndIcePelletsDay __attribute__((swift_name("mixedConditionMostlyCloudyAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndIcePelletsNight __attribute__((swift_name("mixedConditionMostlyCloudyAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyIcePelletsDay __attribute__((swift_name("mixedConditionMostlyClearAndHeavyIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndHeavyIcePelletsNight __attribute__((swift_name("mixedConditionMostlyClearAndHeavyIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyIcePelletsFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyIcePelletsDay __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndHeavyIcePelletsNight __attribute__((swift_name("mixedConditionPartlyCloudyAndHeavyIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyIcePelletsFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyIcePelletsDay __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndHeavyIcePelletsNight __attribute__((swift_name("mixedConditionMostlyCloudyAndHeavyIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndIcePelletsFullDay __attribute__((swift_name("mixedConditionDrizzleAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndIcePelletsDay __attribute__((swift_name("mixedConditionDrizzleAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionDrizzleAndIcePelletsNight __attribute__((swift_name("mixedConditionDrizzleAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndIcePelletsFullDay __attribute__((swift_name("mixedConditionLightRainAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndIcePelletsDay __attribute__((swift_name("mixedConditionLightRainAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionLightRainAndIcePelletsNight __attribute__((swift_name("mixedConditionLightRainAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndIcePelletsFullDay __attribute__((swift_name("mixedConditionRainAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndIcePelletsDay __attribute__((swift_name("mixedConditionRainAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionRainAndIcePelletsNight __attribute__((swift_name("mixedConditionRainAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndIcePelletsFullDay __attribute__((swift_name("mixedConditionFreezingRainAndIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndIcePelletsDay __attribute__((swift_name("mixedConditionFreezingRainAndIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndIcePelletsNight __attribute__((swift_name("mixedConditionFreezingRainAndIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndHeavyIcePelletsFullDay __attribute__((swift_name("mixedConditionFreezingRainAndHeavyIcePelletsFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndHeavyIcePelletsDay __attribute__((swift_name("mixedConditionFreezingRainAndHeavyIcePelletsDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionFreezingRainAndHeavyIcePelletsNight __attribute__((swift_name("mixedConditionFreezingRainAndHeavyIcePelletsNight")));
@property (class, readonly) SharedWeatherCode *thunderstormFullDay __attribute__((swift_name("thunderstormFullDay")));
@property (class, readonly) SharedWeatherCode *thunderstormDay __attribute__((swift_name("thunderstormDay")));
@property (class, readonly) SharedWeatherCode *thunderstormNight __attribute__((swift_name("thunderstormNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndThunderstormFullDay __attribute__((swift_name("mixedConditionMostlyClearAndThunderstormFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndThunderstormDay __attribute__((swift_name("mixedConditionMostlyClearAndThunderstormDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyClearAndThunderstormNight __attribute__((swift_name("mixedConditionMostlyClearAndThunderstormNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndThunderstormFullDay __attribute__((swift_name("mixedConditionPartlyCloudyAndThunderstormFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndThunderstormDay __attribute__((swift_name("mixedConditionPartlyCloudyAndThunderstormDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionPartlyCloudyAndThunderstormNight __attribute__((swift_name("mixedConditionPartlyCloudyAndThunderstormNight")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndThunderstormFullDay __attribute__((swift_name("mixedConditionMostlyCloudyAndThunderstormFullDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndThunderstormDay __attribute__((swift_name("mixedConditionMostlyCloudyAndThunderstormDay")));
@property (class, readonly) SharedWeatherCode *mixedConditionMostlyCloudyAndThunderstormNight __attribute__((swift_name("mixedConditionMostlyCloudyAndThunderstormNight")));
+ (SharedKotlinArray<SharedWeatherCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedWeatherCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) SharedWeatherCodeDayTime *dayTime __attribute__((swift_name("dayTime")));
@property (readonly) NSString *imageNamePrefix __attribute__((swift_name("imageNamePrefix")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherCode.Companion")))
@interface SharedWeatherCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherCodeCompanion *shared __attribute__((swift_name("shared")));
- (SharedWeatherCode * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherCodeDayTime")))
@interface SharedWeatherCodeDayTime : SharedKotlinEnum<SharedWeatherCodeDayTime *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedWeatherCodeDayTime *fullDay __attribute__((swift_name("fullDay")));
@property (class, readonly) SharedWeatherCodeDayTime *day __attribute__((swift_name("day")));
@property (class, readonly) SharedWeatherCodeDayTime *night __attribute__((swift_name("night")));
+ (SharedKotlinArray<SharedWeatherCodeDayTime *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedWeatherCodeDayTime *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecast")))
@interface SharedWeatherForecast : SharedBase
- (instancetype)initWithLocation:(SharedLocation *)location timelines:(SharedWeatherForecastTimelines *)timelines __attribute__((swift_name("init(location:timelines:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWeatherForecastCompanion *companion __attribute__((swift_name("companion")));
- (SharedWeatherForecast *)doCopyLocation:(SharedLocation *)location timelines:(SharedWeatherForecastTimelines *)timelines __attribute__((swift_name("doCopy(location:timelines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLocation *location __attribute__((swift_name("location")));
@property (readonly) SharedWeatherForecastTimelines *timelines __attribute__((swift_name("timelines")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecast.Companion")))
@interface SharedWeatherForecastCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherForecastCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecastTimelines")))
@interface SharedWeatherForecastTimelines : SharedBase
- (instancetype)initWithMinutely:(NSArray<SharedTimelineItem<SharedDataValuesMinutely *> *> *)minutely hourly:(NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *)hourly daily:(NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *)daily __attribute__((swift_name("init(minutely:hourly:daily:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWeatherForecastTimelinesCompanion *companion __attribute__((swift_name("companion")));
- (SharedWeatherForecastTimelines *)doCopyMinutely:(NSArray<SharedTimelineItem<SharedDataValuesMinutely *> *> *)minutely hourly:(NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *)hourly daily:(NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *)daily __attribute__((swift_name("doCopy(minutely:hourly:daily:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedTimelineItem<SharedDataValuesDaily *> *> *daily __attribute__((swift_name("daily")));
@property (readonly) NSArray<SharedTimelineItem<SharedDataValuesHourly *> *> *hourly __attribute__((swift_name("hourly")));
@property (readonly) NSArray<SharedTimelineItem<SharedDataValuesMinutely *> *> *minutely __attribute__((swift_name("minutely")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecastTimelines.Companion")))
@interface SharedWeatherForecastTimelinesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherForecastTimelinesCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformFileStore")))
@interface SharedPlatformFileStore : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)readFromFileFileName:(NSString *)fileName __attribute__((swift_name("readFromFile(fileName:)")));
- (void)removeFileFileName:(NSString *)fileName __attribute__((swift_name("removeFile(fileName:)")));
- (void)writeToFileFileName:(NSString *)fileName fileContent:(NSString *)fileContent __attribute__((swift_name("writeToFile(fileName:fileContent:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSettingStore")))
@interface SharedPlatformSettingStore : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedKotlinx_coroutines_coreFlow>)readBoolForKey:(NSString *)forKey __attribute__((swift_name("readBool(forKey:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)readIntForKey:(NSString *)forKey __attribute__((swift_name("readInt(forKey:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)readLongForKey:(NSString *)forKey __attribute__((swift_name("readLong(forKey:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)readStringForKey:(NSString *)forKey __attribute__((swift_name("readString(forKey:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeValueForKey:(NSString *)forKey completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeValue(forKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeBoolForKey:(NSString *)forKey value:(BOOL)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeBool(forKey:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeIntForKey:(NSString *)forKey value:(int32_t)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeInt(forKey:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeLongForKey:(NSString *)forKey value:(int64_t)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeLong(forKey:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeStringForKey:(NSString *)forKey value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeString(forKey:value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeClock")))
@protocol SharedKotlinx_datetimeClock
@required
- (SharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeClockSystem")))
@interface SharedKotlinx_datetimeClockSystem : SharedBase <SharedKotlinx_datetimeClock>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)system __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeClockSystem *shared __attribute__((swift_name("shared")));
- (SharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()")));
@end

@interface SharedKotlinx_datetimeClockSystem (Extensions)
- (SharedKotlinx_datetimeLocalDateTime *)nowAsLocalDateTime __attribute__((swift_name("nowAsLocalDateTime()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface SharedKotlinx_datetimeLocalDate : SharedBase <SharedKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SharedKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) SharedKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

@interface SharedKotlinx_datetimeLocalDate (Extensions)
- (NSDate *)toNSDateAtStartOfDayIn __attribute__((swift_name("toNSDateAtStartOfDayIn()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface SharedKotlinx_datetimeLocalDateTime : SharedBase <SharedKotlinComparable>
- (instancetype)initWithDate:(SharedKotlinx_datetimeLocalDate *)date time:(SharedKotlinx_datetimeLocalTime *)time __attribute__((swift_name("init(date:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SharedKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) SharedKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) SharedKotlinx_datetimeLocalTime *time __attribute__((swift_name("time")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

@interface SharedKotlinx_datetimeLocalDateTime (Extensions)
- (NSDate *)toNSDate __attribute__((swift_name("toNSDate()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface SharedKotlinIllegalArgumentException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol SharedKotlinx_serialization_coreSerialFormat
@required
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol SharedKotlinx_serialization_coreStringFormat <SharedKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface SharedKotlinx_serialization_jsonJson : SharedBase <SharedKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) SharedKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(SharedKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (SharedKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (SharedKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) SharedKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface SharedKotlinx_datetimeInstant : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(SharedKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (SharedKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface SharedKotlinx_datetimeMonth : SharedKotlinEnum<SharedKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (SharedKotlinArray<SharedKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface SharedKotlinx_datetimeLocalDateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<SharedKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (SharedKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (SharedKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface SharedKotlinx_datetimeDayOfWeek : SharedKotlinEnum<SharedKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (SharedKotlinArray<SharedKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime")))
@interface SharedKotlinx_datetimeLocalTime : SharedBase <SharedKotlinComparable>
- (instancetype)initWithHour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinx_datetimeLocalTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKotlinx_datetimeLocalTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toMillisecondOfDay __attribute__((swift_name("toMillisecondOfDay()")));
- (int64_t)toNanosecondOfDay __attribute__((swift_name("toNanosecondOfDay()")));
- (int32_t)toSecondOfDay __attribute__((swift_name("toSecondOfDay()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface SharedKotlinx_datetimeLocalDateTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<SharedKotlinx_datetimeDateTimeFormatBuilderWithDateTime>))builder __attribute__((swift_name("Format(builder:)")));
- (SharedKotlinx_datetimeLocalDateTime *)parseInput:(id)input format:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface SharedKotlinx_serialization_jsonJsonDefault : SharedKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SharedKotlinx_serialization_jsonJsonElement : SharedBase
@property (class, readonly, getter=companion) SharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface SharedKotlinx_serialization_jsonJsonConfiguration : SharedBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property SharedKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<SharedKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface SharedKotlinx_datetimeInstantCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (SharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (SharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (SharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (SharedKotlinx_datetimeInstant *)parseInput:(id)input format:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) SharedKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol SharedKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<SharedKotlinAppendable>)formatToAppendable:(id<SharedKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol SharedKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol SharedKotlinx_datetimeDateTimeFormatBuilderWithDate <SharedKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)dateFormat:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayOfMonthPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)")));
- (void)dayOfWeekNames:(SharedKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)monthNameNames:(SharedKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime.Companion")))
@interface SharedKotlinx_datetimeLocalTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeLocalTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<SharedKotlinx_datetimeDateTimeFormatBuilderWithTime>))builder __attribute__((swift_name("Format(builder:)")));
- (SharedKotlinx_datetimeLocalTime *)fromMillisecondOfDayMillisecondOfDay:(int32_t)millisecondOfDay __attribute__((swift_name("fromMillisecondOfDay(millisecondOfDay:)")));
- (SharedKotlinx_datetimeLocalTime *)fromNanosecondOfDayNanosecondOfDay:(int64_t)nanosecondOfDay __attribute__((swift_name("fromNanosecondOfDay(nanosecondOfDay:)")));
- (SharedKotlinx_datetimeLocalTime *)fromSecondOfDaySecondOfDay:(int32_t)secondOfDay __attribute__((swift_name("fromSecondOfDay(secondOfDay:)")));
- (SharedKotlinx_datetimeLocalTime *)parseInput:(id)input format:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithTime")))
@protocol SharedKotlinx_datetimeDateTimeFormatBuilderWithTime <SharedKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)amPmHourPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("amPmHour(padding:)")));
- (void)amPmMarkerAm:(NSString *)am pm:(NSString *)pm __attribute__((swift_name("amPmMarker(am:pm:)")));
- (void)hourPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("hour(padding:)")));
- (void)minutePadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("minute(padding:)")));
- (void)secondPadding:(SharedKotlinx_datetimePadding *)padding __attribute__((swift_name("second(padding:)")));
- (void)secondFractionFixedLength:(int32_t)fixedLength __attribute__((swift_name("secondFraction(fixedLength:)")));
- (void)secondFractionMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("secondFraction(minLength:maxLength:)")));
- (void)timeFormat:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("time(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTime")))
@protocol SharedKotlinx_datetimeDateTimeFormatBuilderWithDateTime <SharedKotlinx_datetimeDateTimeFormatBuilderWithDate, SharedKotlinx_datetimeDateTimeFormatBuilderWithTime>
@required
- (void)dateTimeFormat:(id<SharedKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTime(format:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SharedKotlinx_serialization_jsonJsonElementCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface SharedKotlinx_serialization_jsonClassDiscriminatorMode : SharedKotlinEnum<SharedKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) SharedKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (SharedKotlinArray<SharedKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol SharedKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKotlinAppendable
@required
- (id<SharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface SharedKotlinx_datetimePadding : SharedKotlinEnum<SharedKotlinx_datetimePadding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) SharedKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) SharedKotlinx_datetimePadding *space __attribute__((swift_name("space")));
+ (SharedKotlinArray<SharedKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface SharedKotlinx_datetimeDayOfWeekNames : SharedBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface SharedKotlinx_datetimeMonthNames : SharedBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface SharedKotlinx_datetimeDayOfWeekNamesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SharedKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface SharedKotlinx_datetimeMonthNamesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SharedKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
