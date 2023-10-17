//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMLidAngleSensor : NSObject
{
    struct __IOHIDDevice *_lidAngleSensor;	// 8 = 0x8
}

@property(nonatomic) struct __IOHIDDevice *lidAngleSensor; // @synthesize lidAngleSensor=_lidAngleSensor;
- (void)stopLidAngleUpdates;	// IMP=0x0010000000002dff
- (void)startLidAngleUpdates;	// IMP=0x0010000000002df9
@property(readonly, nonatomic) double lidAngle;
- (void)dealloc;	// IMP=0x0010000000002dad

@end

