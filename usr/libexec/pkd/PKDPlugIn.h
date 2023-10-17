//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/PKPlugInCore.h>

@class NSDictionary, NSString, PKDPersonaCache;
@protocol NSObject;

@interface PKDPlugIn : PKPlugInCore
{
    _Bool _isRBManaged;	// 184 = 0xb8
    unsigned int _platform;	// 188 = 0xbc
    NSDictionary *_infoPlist;	// 192 = 0xc0
    NSString *_sandboxProfile;	// 200 = 0xc8
    PKDPersonaCache *_personaCache;	// 208 = 0xd0
    id <NSObject> _fileID;	// 216 = 0xd8
    id <NSObject> _launchFileID;	// 224 = 0xe0
}

+ (id)sandboxOverrideForExtensionPoint:(id)arg1 attributes:(id)arg2;	// IMP=0x00400000000043ad
+ (id)nullPlugIn;	// IMP=0x00100000000033ba
- (void).cxx_destruct;	// IMP=0x00100000000092d0
@property(readonly) id <NSObject> launchFileID; // @synthesize launchFileID=_launchFileID;
@property(readonly) id <NSObject> fileID; // @synthesize fileID=_fileID;
@property(readonly) unsigned int platform; // @synthesize platform=_platform;
@property _Bool isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property(readonly) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(readonly) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)debugDescription;	// IMP=0x00100000000091a7
- (id)checkBusy;	// IMP=0x001000000000915a
- (id)_personaIDForClient:(id)arg1 requestedPersona:(id)arg2;	// IMP=0x00100000000088b7
- (_Bool)enableForClient:(id)arg1 environment:(id)arg2 languages:(id)arg3 oneShotUUID:(id)arg4 persona:(id)arg5 sandbox:(id)arg6 pid:(int *)arg7 error:(id *)arg8;	// IMP=0x0010000000006d4a
- (id)dataContainerURLForPersona:(id)arg1;	// IMP=0x0010000000006cbc
- (id)_dataContainerURLForPersona:(id)arg1;	// IMP=0x00100000000069f0
- (id)allowedTCCServices;	// IMP=0x001000000000663d
- (id)allowForClient:(id)arg1 discoveryInstanceUUID:(id)arg2;	// IMP=0x00100000000064f3
- (_Bool)matchDictionary:(id)arg1 pattern:(id)arg2 discoveryInstanceUUID:(id)arg3;	// IMP=0x0010000000006120
- (_Bool)matchValue:(id)arg1 pattern:(id)arg2;	// IMP=0x0010000000005e98
- (_Bool)matchValue:(id)arg1 patterns:(id)arg2;	// IMP=0x0010000000005c9c
- (_Bool)matchKey:(id)arg1 pattern:(id)arg2 discoveryInstanceUUID:(id)arg3;	// IMP=0x0010000000005689
- (_Bool)match:(id)arg1 discoveryInstanceUUID:(id)arg2;	// IMP=0x001000000000547d
- (id)diagnose;	// IMP=0x001000000000541b
@property(readonly) NSString *annotationKey;
- (id)issueResourceExtensions:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0010000000004f1d
- (void)augmentForm:(id)arg1 host:(id)arg2;	// IMP=0x0010000000004b94
- (id)prunedInfoDictionaryFor:(id)arg1;	// IMP=0x00100000000049a5
@property(readonly) NSString *sandboxProfile; // @synthesize sandboxProfile=_sandboxProfile;
- (id)initWithLSData:(id)arg1 personaCache:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4 proxyFactory:(id)arg5;	// IMP=0x0010000000003498
- (void)dealloc;	// IMP=0x001000000000338b
- (id)launchdVersion;	// IMP=0x00100000000015d9
- (id)launchdIdentifier;	// IMP=0x00100000000015c7

@end
