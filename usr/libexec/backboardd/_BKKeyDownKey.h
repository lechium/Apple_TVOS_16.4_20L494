//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _BKKeyDownKey : NSObject
{
    unsigned long long _senderID;	// 8 = 0x8
    long long _page;	// 16 = 0x10
    long long _usage;	// 24 = 0x18
}

- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0020000000029085
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002907a
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000028fd9
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

