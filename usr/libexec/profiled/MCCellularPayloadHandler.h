//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCCellularPayloadHandler
{
    NSDictionary *_setAsideDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007bf8e
@property(retain, nonatomic) NSDictionary *setAsideDictionary; // @synthesize setAsideDictionary=_setAsideDictionary;
- (void)remove;	// IMP=0x001000000007be30
- (void)unsetAside;	// IMP=0x001000000007bdbb
- (void)setAside;	// IMP=0x001000000007bc83
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007b7f0

@end

