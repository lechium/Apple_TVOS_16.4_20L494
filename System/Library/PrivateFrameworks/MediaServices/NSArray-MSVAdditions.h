//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (MSVAdditions)
- (id)msv_subarrayFromIndex:(long long)arg1;	// IMP=0x0030000000015bd8
- (id)msv_subarrayToIndex:(long long)arg1;	// IMP=0x0030000000015b77
- (long long)msv_lastIndexOfObjectEqualTo:(id)arg1;	// IMP=0x0030000000015ae3
- (long long)msv_lastIndexOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0030000000015a05
- (long long)msv_firstIndexOfObjectEqualTo:(id)arg1;	// IMP=0x0030000000015971
- (long long)msv_firstIndexOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00300000000158ac
- (id)msv_indexesOfObjectsEqualTo:(id)arg1;	// IMP=0x003000000001580c
@property(readonly, copy, nonatomic) NSString *msv_compactDescription;
- (id)msv_reduceIntoObject:(id)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x00300000000480e7
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000048035
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047f83
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047ed1
- (long long)msv_reduceIntoInt64:(long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047e1f
- (int)msv_reduceIntoInt32:(int)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047d6d
- (long long)msv_reduceIntoInt:(long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047cbb
- (double)msv_reduceIntoDouble:(double)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047bfb
- (double)msv_reduceIntoCGFloat:(double)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047b3b
- (float)msv_reduceIntoFloat:(float)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047a7b
- (_Bool)msv_reduceIntoBool:(_Bool)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x00300000000479c5
- (id)msv_reduceIntoObject:(id)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x003000000004781d
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x00300000000476d5
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047591
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047449
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047301
- (int)msv_reduceIntoInt32:(int)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x00300000000471bd
- (long long)msv_reduceIntoInt:(long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000047075
- (double)msv_reduceIntoDouble:(double)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000046f1a
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000046dbf
- (float)msv_reduceIntoFloat:(float)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000046c64
- (_Bool)msv_reduceIntoBool:(_Bool)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0030000000046b1c
- (id)msv_firstWhere:(CDUnknownBlockType)arg1;	// IMP=0x00300000000469cd
- (id)msv_filter:(CDUnknownBlockType)arg1;	// IMP=0x00300000000468d6
- (id)msv_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00300000000466ca
- (id)msv_enumeratedCompactMap:(CDUnknownBlockType)arg1;	// IMP=0x0030000000046570
- (id)msv_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0030000000046528
- (id)msv_enumeratedMap:(CDUnknownBlockType)arg1;	// IMP=0x003000000004640d
- (id)msv_map:(CDUnknownBlockType)arg1;	// IMP=0x00300000000463c5
- (id)msv_suffixFromIndex:(long long)arg1;	// IMP=0x0030000000046345
- (id)msv_prefixUpToIndex:(long long)arg1;	// IMP=0x00300000000462f2
@end

