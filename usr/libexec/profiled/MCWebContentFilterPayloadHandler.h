//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCWebContentFilterPayloadHandler
{
}

+ (id)internalErrorWithUnderlyingError:(id)arg1;	// IMP=0x004000000007e69a
+ (id)internalError;	// IMP=0x001000000007e686
- (void)remove;	// IMP=0x004000000007e9e5
- (void)unsetAside;	// IMP=0x001000000007e95a
- (void)setAside;	// IMP=0x001000000007e8cf
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007e73f
- (void)_removeDependency;	// IMP=0x001000000007e587
- (void)_installDependency;	// IMP=0x001000000007e488

@end

