//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CSDConversationLinkGeneratorDescriptor : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *version;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000002bbc40
- (id)init;	// IMP=0x00100000002bbbe0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002bba90
- (id)initWithIdentifier:(id)arg1 version:(long long)arg2;	// IMP=0x00100000002bb970
@property(nonatomic) long long version; // @synthesize version;
@property(nonatomic, copy) NSString *identifier;

@end

