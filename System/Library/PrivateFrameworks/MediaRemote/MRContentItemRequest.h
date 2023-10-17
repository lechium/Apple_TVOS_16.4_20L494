//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItem, MRPlaybackQueueRequest;

__attribute__((visibility("hidden")))
@interface MRContentItemRequest : NSObject
{
    MRContentItem *_item;	// 8 = 0x8
    MRPlaybackQueueRequest *_request;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000017021c
- (void).cxx_destruct;	// IMP=0x0000000000170286
@property(retain, nonatomic) MRPlaybackQueueRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MRContentItem *item; // @synthesize item=_item;
- (id)description;	// IMP=0x0000000000170224
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170177
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016fdd3
- (id)initWithItem:(id)arg1 request:(id)arg2;	// IMP=0x000000000016fbb6

@end

