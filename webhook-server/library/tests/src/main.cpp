/*
    Copyright (c) 2022 Xavier Leclercq
    All rights reserved.
*/

#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness::CommandLineSpecification commandLineSpec;
    Configuration configuration = commandLineSpec.createDefaultConfiguration();
    CommandLineParser::parse(commandLineSpec, argc, argv, configuration);

    TestHarness theTestHarness("CodeSmithyGitHubWebhookServer Library Tests", configuration);

    TestSequence& theTests = theTestHarness.tests();
    // TODO

    return theTestHarness.run();
}
