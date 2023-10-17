//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBHIDEventSystemClient, PBHIDSender;

@protocol PBHIDEventSystemClientDelegate <NSObject>
- (void)eventSystemClient:(PBHIDEventSystemClient *)arg1 didReceiveEvent:(struct __IOHIDEvent *)arg2;
- (void)eventSystemClient:(PBHIDEventSystemClient *)arg1 didUnregisterSender:(PBHIDSender *)arg2;
- (void)eventSystemClient:(PBHIDEventSystemClient *)arg1 didRegisterSender:(PBHIDSender *)arg2;
@end
