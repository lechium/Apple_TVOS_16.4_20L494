//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CCDValidationGroupInfo
{
    NSArray *_keyInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000d4d0
@property(retain, nonatomic) NSArray *keyInfo; // @synthesize keyInfo=_keyInfo;
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x001000000000d1ff
- (id)_mutableKeyInfoArrayFromValidationInfo:(id)arg1;	// IMP=0x001000000000cfec
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x001000000000cf5a

@end

