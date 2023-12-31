//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringSelection : NSObject
{
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> _selectionRanges;	// 8 = 0x8
    unsigned long long _selectionAffinity;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000052ff
- (void).cxx_destruct;	// IMP=0x00000000000052e3
@property(nonatomic) unsigned long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id)description;	// IMP=0x0000000000005070
- (unsigned long long)hash;	// IMP=0x0000000000004fc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004de5
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x0000000000004ddd
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000004d36
- (void *)selectionRanges;	// IMP=0x0000000000004d2c

@end

