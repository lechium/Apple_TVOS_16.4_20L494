//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ADChunkInfo : NSObject
{
    NSString *_postGen;	// 8 = 0x8
    NSString *_validity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ab08b
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *postGen; // @synthesize postGen=_postGen;
- (id)anchorWithKey:(id)arg1 appID:(id)arg2 syncType:(id)arg3;	// IMP=0x00100000000aaeac
- (_Bool)isValid;	// IMP=0x00100000000aae6c
- (id)dictionaryRepresentation;	// IMP=0x00100000000aadec
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000aac31

@end

