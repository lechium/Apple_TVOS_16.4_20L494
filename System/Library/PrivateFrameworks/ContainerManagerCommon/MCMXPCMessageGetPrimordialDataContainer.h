//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMXPCMessageGetPrimordialDataContainer
{
    _Bool _useCodeSignDatabase;	// 8 = 0x8
    _Bool _extension;	// 9 = 0x9
}

@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) _Bool useCodeSignDatabase; // @synthesize useCodeSignDatabase=_useCodeSignDatabase;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000027d3d

@end

