//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)
- (id)mediaTypeFromIntentMediaType:(long long)arg1;	// IMP=0x00900000000f8ebb
- (id)wf_processedParameterValueForValue:(id)arg1;	// IMP=0x00900000000f8e15
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x00900000000f8d3d
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x00900000000f87e8
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00900000000f852c
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x00900000000f8460
- (Class)wf_parameterClass;	// IMP=0x00900000000f8410
- (Class)wf_objectClass;	// IMP=0x00900000000f83a5
- (Class)wf_facadeClass;	// IMP=0x00900000000f834d
@end
