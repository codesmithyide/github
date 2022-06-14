/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/codesmithyide/content-platform/blob/main/LICENSE.txt
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
