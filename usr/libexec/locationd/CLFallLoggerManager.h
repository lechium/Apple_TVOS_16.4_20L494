//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary;
@protocol CLIntersiloUniverse, OS_dispatch_queue;

@interface CLFallLoggerManager : NSObject
{
    _Bool fLoggingEnabled;	// 8 = 0x8
    NSMutableDictionary *fLoggers;	// 16 = 0x10
    id <CLIntersiloUniverse> fUniverse;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    NSMutableArray *fEventTimes;	// 40 = 0x28
    NSDate *fLastEvent;	// 48 = 0x30
    struct CLGizmoOrientation fOrientation;	// 56 = 0x38
}

+ (id)encodeHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x00400000008ce176
+ (id)encodePressure:(const Pressure_df92a120 *)arg1;	// IMP=0x00100000008ce104
+ (id)encodeFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x00100000008ce0b1
+ (id)encodeBinaryLog:(const struct BinaryData *)arg1;	// IMP=0x00100000008cdf44
+ (id)loggerDataTypeString:(unsigned char)arg1;	// IMP=0x00100000008cd733
+ (unsigned char)loggerDataTypeFrom:(unsigned char)arg1;	// IMP=0x00100000008cd714
@property(nonatomic) struct CLGizmoOrientation orientation; // @synthesize orientation=fOrientation;
@property(nonatomic, getter=isLoggingEnabled, setter=setLoggingEnabled:) _Bool loggingEnabled; // @synthesize loggingEnabled=fLoggingEnabled;
- (void)logOdometer:(const struct OdometerEntry *)arg1;	// IMP=0x00100000008ce71a
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x00100000008ce6dd
- (void)logPressure:(const Pressure_df92a120 *)arg1;	// IMP=0x00100000008ce6a0
- (void)logFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x00100000008ce663
- (void)logSensorType:(unsigned char)arg1 data:(id)arg2 startTime:(double)arg3 timestamp:(unsigned long long)arg4;	// IMP=0x00100000008ce550
- (void)logFalsePositiveSuppressionFeatures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x00100000008ce4b3
- (void)logImpactSensorData:(const struct ImpactData *)arg1;	// IMP=0x00100000008ce365
- (void)logImpactEventState:(const struct ImpactEvent *)arg1;	// IMP=0x00100000008ce2cb
- (void)logImpactEvent:(const struct ImpactEvent *)arg1;	// IMP=0x00100000008ce248
- (void)_forEachLoggerWithType:(unsigned char)arg1 logItem:(const struct BinaryData *)arg2;	// IMP=0x00100000008ce1ff
- (void)_forEachLoggerWithType:(unsigned char)arg1 logData:(id)arg2;	// IMP=0x00100000008cdd95
- (void)flushData:(CDUnknownBlockType)arg1 userProfile:(id)arg2;	// IMP=0x00100000008cdba5
- (void)clearAllLogs;	// IMP=0x00100000008cdb4e
- (void)stopLogging;	// IMP=0x00100000008cdb0a
- (void)_forEachLogger:(CDUnknownBlockType)arg1;	// IMP=0x00100000008cd9aa
- (id)addLogger:(unsigned char)arg1 toDirectory:(id)arg2 prefix:(id)arg3 rotation:(long long)arg4;	// IMP=0x00100000008cd928
- (id)addLogger:(unsigned char)arg1;	// IMP=0x00100000008cd8d3
- (void)_addLogger:(id)arg1 type:(unsigned char)arg2;	// IMP=0x00100000008cd844
- (void)dealloc;	// IMP=0x00100000008cd7f1
- (id)initInUniverse:(id)arg1;	// IMP=0x00100000008cd750

@end

