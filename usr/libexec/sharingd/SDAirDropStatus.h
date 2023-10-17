//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SDAirDropStatusDelegate;

@interface SDAirDropStatus : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
    id <SDAirDropStatusDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000056f72
@property __weak id <SDAirDropStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x0010000000056f3b
- (void)start;	// IMP=0x0010000000056f1d
- (void)somethingChanged:(id)arg1;	// IMP=0x0010000000056f0b
- (void)setStatusAndNotify;	// IMP=0x0010000000056e4b
- (void)dealloc;	// IMP=0x0010000000056e0d
- (id)init;	// IMP=0x0010000000056db3

@end
