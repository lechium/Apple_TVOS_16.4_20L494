//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SFFeedbackListener;

__attribute__((visibility("hidden")))
@interface WeakListener : NSObject
{
    id <SFFeedbackListener> _weakListener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e9cda
@property(readonly, nonatomic) id <SFFeedbackListener> strongListener;
- (id)initWithListener:(id)arg1;	// IMP=0x00000000001e9c60

@end

