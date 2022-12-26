
require('vstudio')

premake.api.register {
	name = "generate_doc",
	scope = "project",
	kind = "string",
}
		

premake.override(premake.vstudio.dotnetbase, "outputProps", function(base, cfg)
	prj = cfg.project;
	if prj.generate_doc and string.lower(prj.generate_doc) == "on" then
		premake.w('<DocumentationFile>' ..string.gsub(cfg.buildtarget.relpath, ".dll", ".xml") .. '</DocumentationFile>')
	end
	base(cfg)

end)