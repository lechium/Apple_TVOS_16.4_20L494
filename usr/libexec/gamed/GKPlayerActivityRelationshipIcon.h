//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKPlayerActivityRelationshipIcon
{
    NSString *_url;	// 8 = 0x8
    long long _platform;	// 16 = 0x10
    NSNumber *_width;	// 24 = 0x18
    NSNumber *_height;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000141073
- (void).cxx_destruct;	// IMP=0x0020000000141417
@property(nonatomic) NSNumber *height; // @synthesize height=_height;
@property(nonatomic) NSNumber *width; // @synthesize width=_width;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000014122b

@end

