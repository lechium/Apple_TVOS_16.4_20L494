//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject
{
    id <CKXORCHelpers> _implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cbbe8
@property(readonly, nonatomic) id <CKXORCHelpers> implementation; // @synthesize implementation=_implementation;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000cbbc8
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000cbbb2
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000cbb9c
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000cbb86
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000cbb70
- (id)generateSchema;	// IMP=0x00000000000cbb5a
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2;	// IMP=0x00000000000cb9c1

@end

