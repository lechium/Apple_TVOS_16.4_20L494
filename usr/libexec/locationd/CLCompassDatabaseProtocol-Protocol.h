//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class MISSING_TYPE, NSString;

@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2 bias:(CDStruct_869f9c67 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;
- (void)getBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2;
- (int)syncgetPendingSetBiasCount;
- (void)setBias:(CDStruct_869f9c67)arg1 withMagneticField:(CDStruct_869f9c67)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (void)dumpDatabase:(NSString *)arg1 onCompletion:(void (^)(NSString *))arg2;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (MISSING_TYPE *)doAsync:withReply: /* Error: Ran out of types for this method. */;
- (void)doAsync:(void (^)(void *))arg1;
@end
