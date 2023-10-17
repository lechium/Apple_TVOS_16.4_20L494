//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
}

- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x000000000013beff
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;	// IMP=0x000000000013bbba
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;	// IMP=0x000000000013b839
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;	// IMP=0x000000000013b53a
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x000000000013b27e
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x000000000013b25f
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x000000000013b240
- (void)dealloc;	// IMP=0x000000000013b1fd
- (void)teardown;	// IMP=0x000000000013b17a
- (id)init;	// IMP=0x000000000013b09f

@end
