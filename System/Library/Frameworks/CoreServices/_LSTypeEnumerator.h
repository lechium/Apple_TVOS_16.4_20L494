//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSTypeEnumerator
{
    struct vector<unsigned int, std::allocator<unsigned int>> _typeIDs;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001330a7
- (void).cxx_destruct;	// IMP=0x0000000000133083
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013300f
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x0000000000132f74
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x0000000000132df4

@end
