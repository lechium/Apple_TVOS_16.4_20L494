//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BMBookmarkablePublisher.h>

@class MISSING_TYPE, NSArray;

@interface _TtC26AIMLInstrumentationStreams25SiriConversationPublisher : BMBookmarkablePublisher
{
    MISSING_TYPE *upstream;	// 8 = 0x8
    MISSING_TYPE *inner;	// 16 = 0x10
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x0060000000033a30
- (void).cxx_destruct;	// IMP=0x0000000000034370
- (id)init;	// IMP=0x00000000000342f0
@property(nonatomic, readonly) NSArray *bookmarkableUpstreams;
- (void)subscribe:(id)arg1;	// IMP=0x00000000000338e0

@end

